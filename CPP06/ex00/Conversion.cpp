//
// Created by Denim Hawkgirl on 7/1/22.
//

#include "Conversion.hpp"
#include <limits>

Conversion::Conversion() {
//    std::cout << GREEN "Default constructor" OFF << std::endl;
}

Conversion::~Conversion() {
//    std::cout << RED "Destructor" OFF << std::endl;
}

Conversion::Conversion(std::string str) {
//    std::cout << GREEN "Constructor" OFF << std::endl;
    this->_str = str;
}

Conversion::Conversion(Conversion & copy) {
//    std::cout << GREEN "Copy constructor" OFF << std::endl;
    *this = copy;
}

Conversion & Conversion::operator=(Conversion & rhs) {
    if (this == &rhs)
        return *this;
    this->_str = rhs.getStr();
    this->_char = rhs.getChar();
    this->_int = rhs.getInt();
    this->_float = rhs.getFloat();
    this->_double = rhs.getDouble();

    return *this;
}

std::string Conversion::getStr() {
    return _str;
}

char Conversion::getChar() {
    return _char;
}

int Conversion::getInt() {
    return _int;
}

float Conversion::getFloat() {
    return _float;
}

double Conversion::getDouble() {
    return _double;
}

void Conversion::toChar() {
    std::cout << "char: ";
    if ((this->getStr().size() == 1) && !(isdigit(this->getStr()[0]))) {
        this->_char = this->getStr()[0];
        this->_str = std::to_string((int)this->getStr()[0]);
        std::cout << "'" << _char << "'" << std::endl;

        return ;
    }
    try {
        if ((isInvalid(_str)) || _str.length() > 4 || std::stoi(_str) > 127 || std::stoi(_str) < -128)
            throw ErrorException();

        _char = static_cast<char>(std::stoi(_str));
        if (std::isprint(_char))
            std::cout << "'" << _char << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    catch (...) {
        std::cout << "Error string!" << std::endl;
    }
}

void Conversion::toInt() {
    std::cout << "int: ";
    try {
        if ((isInvalid(_str)) || _str.length() > 11 || std::stol(_str) > 2147483647 || std::stol(_str) < -2147483648)
            throw ErrorException();

        _int = static_cast<int>(std::stol(_str));
        std::cout << _int << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    catch (...) {
        std::cout << "Error string!" << std::endl;
    }
}

void Conversion::toFloat() {
    std::cout << "float: ";
    try {
        _float = static_cast<float>(std::stof(_str));
        std::cout << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    catch (...) {
        std::cout << "Error string!" << std::endl;
    }
}

void Conversion::toDouble() {
    std::cout << "double: ";
    try {
        _double = static_cast<double>(std::stod(_str));
        std::cout << std::fixed << std::setprecision(1) << _double << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    catch (...) {
        std::cout << "Error string!" << std::endl;
    }
}

bool Conversion::isInvalid(std::string str) {
    return  str == "-inff" || str == "+inff" ||
            str == "nanf" || str == "nan" ||
            str == "+inf" || str == "-inf";
}
