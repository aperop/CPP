//
// Created by Denim Hawkgirl on 5/31/22.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB(void) {}

void HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->type->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& type)
{
    this->type = &type;
}
