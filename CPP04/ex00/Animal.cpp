//
// Created by Denim Hawkgirl on 6/7/22.
//

#include "Animal.hpp"

Animal::Animal() {
    this->type = "Animal";
    std::cout << GREEN "Animal constructor" OFF << std::endl;
}

Animal::~Animal() {
    std::cout << RED "Animal destructor" OFF << std::endl;
}

Animal::Animal(Animal const &copy) : type(copy.getType()) {
}

Animal &Animal::operator=(Animal const &rhs) {
    this->type = rhs.getType();
    return *this;
}

void Animal::makeSound() const {
    std::cout << YELLOW "RRRRR....." OFF << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}
