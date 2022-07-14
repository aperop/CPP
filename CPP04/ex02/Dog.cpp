//
// Created by Denim Hawkgirl on 6/7/22.
//

#include "Dog.hpp"

Dog::Dog() : AAnimal() {
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << GREEN "Dog constructor" OFF << std::endl;
}

Dog::~Dog(void) {
    delete this->brain;
    std::cout << RED "Dog destructor" OFF << std::endl;
}

Dog::Dog(Dog const &to_copy) : AAnimal() {
    this->type = to_copy.getType();
}

Dog &Dog::operator=(Dog const &rhs) {
    this->type = rhs.getType();
    return *this;
}

void Dog::makeSound(void) const {
    std::cout << YELLOW "GavGavGav" OFF << std::endl;
}

Brain *Dog::getBrain(void) const {
    return this->brain;
}