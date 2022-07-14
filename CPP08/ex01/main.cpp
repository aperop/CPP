//
// Created by Denim Hawkgirl on 7/2/22.
//

#include <iostream>
#include "Span.hpp"

int main() {
    {
        try {
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;

            sp.addNumber(11);
        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }

    }

    {
        Span sp = Span(6);
        try {
            int arr[] = {0, 10, 2, 3, 5, -7, };
            int n = sizeof(arr) / sizeof(arr[0]);

            std::vector<int> array(arr, arr + n);
            sp.addNumber(array.begin(), array.end());
        }
        catch(const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    return 0;
}