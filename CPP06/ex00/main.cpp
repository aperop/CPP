//
// Created by Denim Hawkgirl on 7/1/22.
//

#include <iostream>
#include "Conversion.hpp"

int main(int ac, const char **av) {

//    std::cout << std::numeric_limits<int>::max() << std::endl;
//    std::cout << std::numeric_limits<int>::min() << std::endl;
//    std::cout << (int)std::numeric_limits<char>::max() << std::endl;
//    std::cout << (int)std::numeric_limits<char>::min() << std::endl;
//    std::cout << std::numeric_limits<float>::max() << std::endl;
//    std::cout << std::numeric_limits<float>::min() << std::endl;
//    std::cout << std::numeric_limits<double>::max() << std::endl;
//    std::cout << std::numeric_limits<double>::min() << std::endl;
//    std::cout << std::numeric_limits<float>::infinity() << std::endl;
//    std::cout << (float)(0.0f/0.0f) << std::endl;

    if (ac != 2) {
        std::cout << "Usage: ./convert arg" << std::endl;
        return -1;
    }

    std::string str = av[1];

    Conversion *conv = new Conversion(str);

    if ((str.find_first_not_of("0123456789") != std::string::npos) && str.size() != 1 && !conv->isInvalid(str)) {
        std::cout << "Error string!" << std::endl;
        delete conv;
        return -1;
    }

    conv->toChar();
    conv->toInt();
    conv->toFloat();
    conv->toDouble();

    delete conv;

    return 0;
}
