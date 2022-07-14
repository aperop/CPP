//
// Created by Denim Hawkgirl on 5/26/22.
//
#include <iostream>

int main(int argc, const char **argv) {
    if (argc > 1) {
        while (*(++argv))
            while (*(*argv))
                std::cout << (char)std::toupper(*(*argv)++);
    } else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    endl(std::cout);
    return 0;
}
