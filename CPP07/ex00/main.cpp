//
// Created by Denim Hawkgirl on 7/1/22.
//

#include "whatever.hpp"
#include <string>
#include <iostream>

int main() {

    std::cout << std::endl << "INTEGER"  << std::endl;
    {
        int a = 4;
        int b = 7;
        std::cout << "min: " << ::min(a, b) << std::endl;
        std::cout << "max: " << ::max(a, b) << std::endl;

        std::cout << "a: " << a << "\tb: " << b << std::endl;
        ::swap(a, b);
        std::cout << "a: " << a << "\tb: " << b << std::endl;
    }

    std::cout << std::endl << "CHAR"  << std::endl;
    {
        char a = 'f';
        char b = 's';
        std::cout << "min: " << ::min(a, b) << std::endl;
        std::cout << "max: " << ::max(a, b) << std::endl;

        std::cout << "a: " << a << "\tb: " << b << std::endl;
        ::swap(a, b);
        std::cout << "a: " << a << "\tb: " << b << std::endl;
    }

    std::cout << std::endl << "FLOAT"  << std::endl;
    {
        float a = 43.6f;
        float b = 9.5f;
        std::cout << "min: " << ::min(a, b) << std::endl;
        std::cout << "max: " << ::max(a, b) << std::endl;

        std::cout << "a: " << a << "\tb: " << b << std::endl;
        ::swap(a, b);
        std::cout << "a: " << a << "\tb: " << b << std::endl;
    }

    std::cout << std::endl << "DOUBLE"  << std::endl;
    {
        double a = 3.6;
        double b = 99.5;
        std::cout << "min: " << ::min(a, b) << std::endl;
        std::cout << "max: " << ::max(a, b) << std::endl;

        std::cout << "a: " << a << "\tb: " << b << std::endl;
        ::swap(a, b);
        std::cout << "a: " << a << "\tb: " << b << std::endl;
    }

    std::cout << std::endl << "STRING"  << std::endl;
    {
        std::string a = "Denim";
        std::string b = "Hawkgirl";
        std::cout << "min: " << ::min(a, b) << std::endl;
        std::cout << "max: " << ::max(a, b) << std::endl;
        std::cout << "a: " << a << "\tb: " << b << std::endl;
        ::swap(a, b);
        std::cout << "a: " << a << "\tb: " << b << std::endl;
    }

    return 0;
}


