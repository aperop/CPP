//
// Created by Denim Hawkgirl on 5/30/22.
//
#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie new_zombie;

    new_zombie.set_name(name);
    new_zombie.announce();
}
