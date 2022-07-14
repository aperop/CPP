//
// Created by Denim Hawkgirl on 7/2/22.
//

#ifndef CPP08_MUTANTSTACK_HPP
#define CPP08_MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container> {
    public:
        MutantStack(): std::stack<T, Container>(){}

        ~MutantStack(){}

        MutantStack(MutantStack const &copy): std::stack<T, Container>(copy) {}

        MutantStack &operator=(MutantStack const &rhs) {
            if (this != & rhs) {
                this->c = rhs.c;
            }
            return *this;
        }

        typedef typename Container::iterator iterator;
        iterator begin() {
            return this->c.begin();
        }
        iterator end() {
            return this->c.end();
        }
};
#endif //CPP08_MUTANTSTACK_HPP
