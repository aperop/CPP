//
// Created by Denim Hawkgirl on 7/2/22.
//

#include "Span.hpp"

Span::Span() {
    this->_N = 0;
    this->_array = new std::vector<int>;
}

Span::~Span() {
    delete this->_array;
}

Span::Span(unsigned int const N) {
    this->_N = N;
    this->_array = new std::vector<int>;
};

Span::Span(Span const &copy) {
    this->_N = copy._N;
    this->_array = new std::vector<int>(copy._array->begin(), copy._array->end());
};

Span &Span::operator=(Span const &rhs) {
    if (this != &rhs) {
        this->_array = rhs._array;
        this->_N = rhs._N;
    }
    return *this;
}

void Span::addNumber(int n) {
    if (this->_array->size() == this->_N)
        throw Span::NoSpaceException();
    this->_array->push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    while (begin != end) {
        if (this->_array->size() == this->_N) {
            throw Span::NoSpaceException();
        }
        this->_array->push_back(*begin);
        ++begin;
    }
}

unsigned int Span::shortestSpan(void) const {
    std::sort(this->_array->begin(), this->_array->end());

    int shortestSpan = -1;
    int last_number = *this->_array->begin();

    for (std::vector<int>::iterator it = this->_array->begin(); it != this->_array->end(); ++it) {
        if (it != this->_array->begin()) {
            if (shortestSpan == -1 || shortestSpan >= *it - last_number) {
                shortestSpan = *it - last_number;
                last_number = *it;
            }
        }
    }
    return shortestSpan;
}

unsigned int Span::longestSpan(void) const {
    int longestSpan;

    longestSpan = *std::max_element(this->_array->begin(), this->_array->end()) - *std::min_element(this->_array->begin(), this->_array->end());
    return longestSpan;
}
