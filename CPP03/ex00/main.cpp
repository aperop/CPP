//
// Created by Denim Hawkgirl on 6/6/22.
//

#include "ClapTrap.hpp"

int main() {
    ClapTrap defClap;
    ClapTrap withName("Denim");
    ClapTrap Copy(withName);

    withName.attack("Hammer");
    withName.takeDamage(7);
    withName.takeDamage(5);
    withName.beRepaired(8);
    Copy.attack("Hummer");
    Copy.takeDamage(9);
    Copy.takeDamage(1);
    Copy.beRepaired(8);

    return (0);
}