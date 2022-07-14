//
// Created by Denim Hawkgirl on 6/21/22.
//

#include "Bureaucrat.hpp"

int main() {

    Bureaucrat *b = new Bureaucrat("Denim", 1);
    Bureaucrat *new_b = new Bureaucrat("NewDenim", 150);

    try {
        Bureaucrat *wrong_b = new Bureaucrat("WrongDenim", 1200);
        std::cout << *wrong_b << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << *b << std::endl;
    std::cout << *new_b << std::endl;

    try {
        b->incrementGrade();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        new_b->decrementGrade();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    b->decrementGrade();
    std::cout << *b << std::endl;

    delete b;
    delete new_b;
}