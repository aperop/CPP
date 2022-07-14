//
// Created by Denim Hawkgirl on 6/6/22.
//

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap defClap;
    DiamondTrap withName("Denim");


    withName.attack("Hammer");
    withName.takeDamage(70);
    withName.takeDamage(50);
    withName.beRepaired(80);
    defClap.whoAmI();
    withName.whoAmI();

    return (0);
}