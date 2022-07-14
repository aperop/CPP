//
// Created by Denim Hawkgirl on 6/1/22.
//

#include "Fixed.hpp"


Fixed::Fixed() {
//    std::cout << GREEN << "Default constructor called" << OFF << std::endl;
    this->fix = 0;
}

Fixed::Fixed(int int_num) {
//    std::cout << GREEN << "Int constructor called" << OFF << std::endl;
    this->fix = int_num << this->fract_bit;
}

Fixed::Fixed(float float_num) {
//    std::cout << GREEN << "Float constructor called" << OFF << std::endl;
    this->fix = roundf(float_num * (1 << this->fract_bit));
}

Fixed::Fixed(const Fixed& copy) {
//    std::cout << BLUE << "Copy constructor called" << OFF << std::endl;
    *this = copy;
}

Fixed::~Fixed() {
//    std::cout << RED << "Destructor called" << OFF << std::endl;
}


std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}

Fixed& Fixed::operator=(const Fixed& copy) {
//    std::cout << BLUE << "Copy assignment operator called" << OFF << std::endl;
    if (this == &copy) {
        return *this;
    }
    this->fix = copy.getRawBits();
    return *this;
}

int Fixed::toInt(void) const {
    return this->fix / (1 << this->fract_bit);
}

float Fixed::toFloat(void) const {
    return (float)this->fix / (1 << this->fract_bit);
}

int Fixed::getRawBits(void) const {
    return (this->fix);
}

void Fixed::setRawBits(int const raw) {
    this->fix = raw;
}

Fixed Fixed::operator+(Fixed const &num) {
    return this->toFloat() + num.toFloat();
}

Fixed Fixed::operator-(Fixed const &num) {
    return this->toFloat() - num.toFloat();
}

Fixed Fixed::operator*(Fixed const &num) {
    return this->toFloat() * num.toFloat();
}

Fixed Fixed::operator/(Fixed const &num) {
    return this->toFloat() / num.toFloat();
}

Fixed Fixed::operator++() {
    this->fix++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    this->fix++;
    return tmp;
}

Fixed Fixed::operator--() {
    this->fix--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    this->fix--;
    return tmp;
}

bool Fixed::operator>(Fixed const &num) const {
    return this->fix > num.getRawBits();
}

bool Fixed::operator>=(Fixed const &num) const {
    return this->fix >= num.getRawBits();
}

bool Fixed::operator<(Fixed const &num) const {
    return this->fix < num.getRawBits();
}

bool Fixed::operator<=(Fixed const &num) const {
    return this->fix <= num.getRawBits();
}

bool Fixed::operator==(Fixed const &num) const {
    return this->fix == num.getRawBits();
}

bool Fixed::operator!=(Fixed const &num) const {
    return this->fix != num.getRawBits();
}


Fixed &Fixed::max(Fixed &num1, Fixed &num2) {
    return (num1 >= num2 ? num1: num2);
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2) {
    return (num1 <= num2 ? num1: num2);
}

const Fixed &Fixed::max(Fixed const &num1, Fixed const &num2) {
    return (num1 >= num2 ? num1: num2);
}

const Fixed &Fixed::min(Fixed const &num1, Fixed const &num2) {
    return (num1 <= num2 ? num1: num2);
}
