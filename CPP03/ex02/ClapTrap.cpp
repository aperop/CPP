//
// Created by Denim Hawkgirl on 6/6/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    this->name = "Default";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    std::cout << GREEN "ClapTrap default constructor called" OFF << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    std::cout << GREEN "ClapTrap constructor called" OFF << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << RED "ClapTrap destructor called" OFF << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy) {
    std::cout << BLUE "Copy constructor called" OFF << std::endl;
    *this = copy;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & copy) {
    std::cout << BLUE "Copy assignment operator called" OFF << std::endl;
    if (this == &copy) {
        return *this;
    }
    this->name = copy.name;
    this->hit_points = copy.hit_points;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    return *this;
}

void ClapTrap::attack(std::string const & target) {
    if (this->hit_points <= 0 || this->energy_points <= 0) {
        std::cout << YELLOW "ClapTrap " << this->name << " can’t do anything, because it has no hit points "
                                                         "or energy points left." OFF << std::endl;
        return;
    }
    std::cout << YELLOW "ClapTrap " << this->name << " attack " << target <<", causing ";
    std::cout << this->attack_damage << " points of damage!" OFF << std::endl;
    this->energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if ((int)amount > this->hit_points)
    {
        std::cout << YELLOW "ClapTrap " << this->name << " took " << this->hit_points;
        std::cout << " points of damage! " << this->name << " has no hitpoint left." OFF << std::endl;
        this->hit_points = 0;
        return;
    }
    this->hit_points -= amount;
    std::cout << YELLOW "ClapTrap " << this->name << " took " << amount << " points of damage! ";
    std::cout << this->name << " have " << this->hit_points << " hit points." OFF << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->hit_points <= 0 || this->energy_points <= 0) {
        std::cout << YELLOW "ClapTrap " << this->name << " can’t do anything, because it has no hit points "
                                                         "or energy points left." OFF << std::endl;
        return;
    }
    this->hit_points += amount;
    this->energy_points--;
    std::cout << YELLOW "ClapTrap " << this->name << " has been repaired with " << amount << " heal points! ";
    std::cout << this->name << " now have " << this->hit_points << " hit points." OFF << std::endl;
}
