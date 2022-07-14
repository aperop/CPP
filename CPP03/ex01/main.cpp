//
// Created by Denim Hawkgirl on 6/6/22.
//

#include "ScavTrap.hpp"

int main() {
    ScavTrap defClap;
    ScavTrap withName("Denim");
    ScavTrap Copy(withName);

    withName.attack("Hammer");
    withName.takeDamage(70);
    withName.takeDamage(50);
    withName.beRepaired(80);
    Copy.attack("Hummer");
    Copy.takeDamage(90);
    Copy.takeDamage(10);
    Copy.beRepaired(80);
    Copy.guardGate();

    return (0);
}