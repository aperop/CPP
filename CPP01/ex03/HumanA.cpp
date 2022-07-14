//
// Created by Denim Hawkgirl on 5/31/22.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type): type(type)
{
    this->name = name;
}

HumanA::~HumanA(void) {}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->type.getType() << std::endl;
}