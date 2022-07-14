//
// Created by Denim Hawkgirl on 6/7/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    this->type = "WrongCat";
    std::cout << GREEN "WrongCat constructor"  OFF << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << RED "WrongCat destructor" OFF << std::endl;
}

WrongCat::WrongCat(WrongCat const &to_copy) : WrongAnimal() {
    this->type = to_copy.getType();
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
    this->type = rhs.getType();
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << YELLOW "Meow" OFF << std::endl;
}