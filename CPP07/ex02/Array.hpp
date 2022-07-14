//
// Created by Denim Hawkgirl on 7/2/22.
//

#ifndef CPP07_ARRAY_HPP
#define CPP07_ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>
class Array {

    public:
        Array() {
            this->_size = 0;
            this->_argv = NULL;
        }

        Array(unsigned int n) {
            this->_size = n;
            this->_argv = new T[n]();
        }

        ~Array() {
            if(this->_argv) {
                delete[] this->_argv;
            }
        }

        Array(Array const &copy) {
            this->operator=(copy);
        }

        Array &operator=(Array const &rhs) {
            if (this == &rhs) {
                return *this;
            }
            this->_size = rhs.size();
            this->_argv = new T[_size]();
            for (unsigned int i = 0; i < _size; ++i) {
                this->_argv[i] = rhs._argv[i];
            }
            return *this;
        }

        T &operator[](unsigned int const index) const {
            if (index < 0 || index >= this->_size) {
                throw std::out_of_range("Index out of range");
            }
            return this->_argv[index];
        }

        unsigned int size() const {
            return this->_size;
        }

    private:
        unsigned int _size;
        T           *_argv;

};

#endif //CPP07_ARRAY_HPP
