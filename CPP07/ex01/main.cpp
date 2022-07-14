//
// Created by Denim Hawkgirl on 7/2/22.
//
#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void print(T &arr) {
    std::cout << arr << " ";
}


int main() {

    {
        int intArray[] = {-10, 20, 3};
        iter(intArray, sizeof(intArray) / sizeof(int), print);
    }
    std::cout << std::endl << std::endl;

    {
        double doubleArray[] = {0.3, 45.3, -76.7, 88.55};
        iter(doubleArray, sizeof(doubleArray) / sizeof(double), print);
    }
    std::cout << std::endl << std::endl;

    {
        std::string stringArray[] = {"Hello", "Every", "Body"};
        iter(stringArray, sizeof(stringArray) / sizeof(std::string), print);
        std::cout << std::endl << std::endl;
    }

    return 0;
}
