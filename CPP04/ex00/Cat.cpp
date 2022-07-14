//
// Created by Denim Hawkgirl on 6/7/22.
//

#include "Cat.hpp"

Cat::Cat() : Animal() {
    this->type = "Cat";
    std::cout << GREEN "Cat constructor" OFF << std::endl;
}

Cat::~Cat(void) {
    std::cout << RED "Cat destructor" OFF << std::endl;
}

Cat::Cat(Cat const &to_copy) : Animal() {
    this->type = to_copy.getType();
}

Cat &Cat::operator=(Cat const &rhs) {
    this->type = rhs.getType();
    return *this;
}

void Cat::makeSound(void) const {
    std::cout << YELLOW "Meow" OFF << std::endl;
}