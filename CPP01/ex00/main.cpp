//
// Created by Denim Hawkgirl on 5/30/22.
//

#include "Zombie.hpp"

int main( void )
{
    Zombie* denim = newZombie("Heap");
    denim->announce();
    randomChump("Stack");
    delete denim;
    return (0);
}