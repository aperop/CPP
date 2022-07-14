//
// Created by Denim Hawkgirl on 7/2/22.
//

#ifndef CPP08_SPAN_HPP
#define CPP08_SPAN_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

class Span {
    public:
        Span();
        Span(unsigned int const N);
        ~Span();
        Span(Span const &copy);
        Span &operator=(Span const &rhs);

        void addNumber(int n);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

        class NoSpaceException: public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Span is full.";
                }
        };

    private:
        std::vector<int> *_array;
        unsigned int _N;
};


#endif //CPP08_SPAN_HPP
