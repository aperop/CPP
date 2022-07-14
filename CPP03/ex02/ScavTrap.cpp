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

ScavTrap::ScavTrap(const ScavTrap & scav) {
    std::cout << BLUE "Copy constructor called" OFF << std::endl;
    this->operator= (scav);
}

ScavTrap::~ScavTrap() {
    std::cout << RED "ScavTrap destructor called" OFF << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap & scav) {
    std::cout << BLUE "Copy assignment operator called" OFF << std::endl;
    name = scav.name;
    hit_points = scav.hit_points;
    energy_points = scav.energy_points;
    attack_damage = scav.attack_damage;
    return (*this);
}

void	ScavTrap::guardGate() {
    std::cout << BLUE << this->name << " is now in Gate keeper mode"  OFF << std::endl;
}
