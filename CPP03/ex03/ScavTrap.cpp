//
// Created by Denim Hawkgirl on 6/6/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
    this->name = "DefScavTrap";
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << GREEN "ScavTrap default constructor called" OFF << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << GREEN "ScavTrap constructor called" OFF << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & copy) {
    std::cout << BLUE "Copy constructor called" << this->name << OFF << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap() {
    std::cout << RED "ScavTrap destructor called" OFF << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap & copy) {
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

void	ScavTrap::guardGate() {
    std::cout << BLUE << this->name << " is now in Gate keeper mode"  OFF << std::endl;
}
