//
// Created by Denim Hawkgirl on 7/2/22.
//

#include <iostream>
#include "easyfind.hpp"

void addElem(int &elem) {
    elem = std::rand() % 10;
}

int main(void) {
    srand(time(NULL));
    std::vector<int> array(10);

    std::for_each(array.begin(), array.end(), addElem);
    for (size_t i = 0; i < array.size(); ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;

    try {
        std::cout << *easyfind(array, 5) << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
