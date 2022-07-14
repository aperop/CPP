//
// Created by Denim Hawkgirl on 6/1/22.
//

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << GREEN << "Default constructor called" << OFF << std::endl;
    this->fix = 0;
}

Fixed::Fixed(const Fixed& copy) {
    std::cout << BLUE << "Copy constructor called" << OFF << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed& copy) {
    std::cout << BLUE << "Copy assignment operator called" << OFF << std::endl;
    if (this == &copy) {
        return *this;
    }
    this->fix = copy.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << RED << "Destructor called" << OFF << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << YELLOW << "getRawBits member function called" << OFF << std::endl;
    return (this->fix);
}

void Fixed::setRawBits(int const raw) {
    this->fix = raw;
}
