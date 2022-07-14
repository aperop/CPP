//
// Created by Denim Hawkgirl on 6/7/22.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
    this->name = "defDiamond";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    std::cout << GREEN "DiamondTrap default constructor called " << this->name << OFF << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hit_points = FragTrap::hit_points;
    this->energy_points = FragTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
    std::cout << GREEN "DiamondTrap constructor called " << this->name << OFF << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << RED "DiamondTrap destructor called" << this->name << OFF << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : ClapTrap(), FragTrap(), ScavTrap() {
    std::cout << BLUE "Copy constructor called" << this->name << OFF << std::endl;
    *this = copy;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &copy) {
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

void DiamondTrap::whoAmI() {
    std::cout << this->name << " " << ClapTrap::name << std::endl;
}
