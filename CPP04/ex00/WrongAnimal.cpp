//
// Created by Denim Hawkgirl on 6/7/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    this->type = "WrongAnimal";
    std::cout << GREEN "WrongAnimal constructor" OFF << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << RED "WrongAnimal destructor" OFF << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) : type(copy.getType()) {
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
    this->type = rhs.getType();
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << YELLOW "RRRRR....." OFF << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->type;
}