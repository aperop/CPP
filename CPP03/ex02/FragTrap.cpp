//
// Created by Denim Hawkgirl on 6/6/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
    this->name = "DefFragTrap";
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << GREEN "FragTrap default constructor called" OFF << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << GREEN "FragTrap constructor called" OFF << std::endl;
}

FragTrap::FragTrap(const FragTrap & scav) {
    std::cout << BLUE "Copy constructor called" OFF << std::endl;
    this->operator= (scav);
}

FragTrap::~FragTrap() {
    std::cout << RED "FragTrap destructor called" OFF << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap & scav) {
    std::cout << BLUE "Copy assignment operator called" OFF << std::endl;
    name = scav.name;
    hit_points = scav.hit_points;
    energy_points = scav.energy_points;
    attack_damage = scav.attack_damage;
    return (*this);
}

void	FragTrap::highFivesGuys() {
    std::cout << BLUE << this->name << " give high fives!"  OFF << std::endl;
}
