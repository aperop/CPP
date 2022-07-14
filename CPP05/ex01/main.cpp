//
// Created by Denim Hawkgirl on 6/21/22.
//

#include "Bureaucrat.hpp"

int main() {

    Bureaucrat *b = new Bureaucrat("Denim", 1);
    Form *f = new Form("SIMPLE_FORM", 5, 5);
    std::cout << *b << std::endl;

    try
    {
        b->incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    b->decrementGrade();
    b->signForm(*f);

    delete f;

    f = new Form("MAIN_FORM", 1, 1);;
    b->signForm(*f);
    std::cout << *b << std::endl;

    delete f;
    delete b;

    return 0;
}
