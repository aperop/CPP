//
// Created by Denim Hawkgirl on 5/31/22.
//

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (1);
    }
    Harl harl;

    harl.complain(argv[1]);
    return (0);
}