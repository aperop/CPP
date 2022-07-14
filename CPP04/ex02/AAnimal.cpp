//
// Created by Denim Hawkgirl on 6/7/22.
//

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    this->type = "AAnimal";
    std::cout << GREEN "AAnimal constructor" OFF << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << RED "AAnimal destructor" OFF << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy) : type(copy.getType()) {
}

AAnimal &AAnimal::operator=(AAnimal const &rhs) {
    this->type = rhs.getType();
    return *this;
}

void AAnimal::makeSound() const {
    std::cout << YELLOW "RRRRR....." OFF << std::endl;
}

std::string AAnimal::getType() const {
    return this->type;
}
