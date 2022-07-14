//
// Created by Denim Hawkgirl on 5/30/22.
//

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << GREEN << "Zombie has risen!!!" << OFF << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << RED << this->name << " is dead!!!" << OFF << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce(void) const
{
    std::cout << YELLOW << this->name << ":" << BLUE " BraiiiiiiinnnzzzZ..." << std::endl;
}
