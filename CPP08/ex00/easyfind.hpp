//
// Created by Denim Hawkgirl on 7/2/22.
//

#ifndef CPP08_EASYFIND_HPP
#define CPP08_EASYFIND_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

class ElementNotFound : public std::exception {
    public:
        virtual const char *what() const throw() {
            return "NotFound";
        }
};


template <typename T>
typename T::iterator easyfind(T &container, int find) {
    if (container.begin() == container.end()) {
        std::cout << "Element: " << find << " ";
        throw ElementNotFound();
    }
    typename T::iterator it = std::find(container.begin(), container.end(), find);
    if (it == container.end()) {
        std::cout << "Element: " << find << " ";
        throw ElementNotFound();
    }
    return it;
}

#endif //CPP08_EASYFIND_HPP
