//
// Created by Denim Hawkgirl on 5/30/22.
//

#include "Zombie.hpp"

int main( void )
{
    const int	N = 5;
    Zombie* zombie_horde = zombieHorde(N, "Zombie");

    for (int i = 0; i < N; i++)
    {
        zombie_horde[i].announce();
    }

    delete[] zombie_horde;
    std::cout << "All horde is dead!!!" << std::endl;
    return (0);
}