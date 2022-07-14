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

FragTrap::FragTrap(const FragTrap & copy) {
    std::cout << BLUE "Copy constructor called " << this->name << OFF << std::endl;
    *this = copy;
}

FragTrap::~FragTrap() {
    std::cout << RED "FragTrap destructor called" OFF << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap & copy) {
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

void	FragTrap::highFivesGuys() {
    std::cout << BLUE << this->name << " give high fives!"  OFF << std::endl;
}
