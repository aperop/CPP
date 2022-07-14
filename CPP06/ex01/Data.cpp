//
// Created by Denim Hawkgirl on 7/1/22.
//

#include "Data.hpp"

Data::Data() {
    this->_name = "Default";
}

Data::Data(std::string const name) {
    this->_name = name;
}

Data::~Data() {}

Data::Data(Data const &copy) {
    *this = copy;
}

Data &Data::operator=(Data const &rhs) {
    if (this == &rhs)
        return *this;
    this->_name = rhs.getName();
    return *this;
}

std::string Data::getName(void) const {
    return this->_name;
}

