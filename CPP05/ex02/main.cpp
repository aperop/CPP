//
// Created by Denim Hawkgirl on 6/21/22.
//

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat *b = new Bureaucrat("Denim", 1);

    std::cout << std::endl;
    {
        Form *sc_form = new ShrubberyCreationForm("Denim");
        b->signForm(*sc_form);
        b->executeForm(*sc_form);
        delete sc_form;
    }
    std::cout << std::endl;

    std::cout << std::endl;
    {
        Form *rr_form = new RobotomyRequestForm("Denim");
        b->signForm(*rr_form);
        b->executeForm(*rr_form);
        delete rr_form;
    }
    std::cout << std::endl;

    std::cout << std::endl;
    {
        Form *pp_form = new PresidentialPardonForm("Denim");
        std::cout << *pp_form << std::endl;
        try {
            pp_form->execute(*b);
        }
        catch(const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        b->signForm(*pp_form);
        b->executeForm(*pp_form);
        delete pp_form;
    }
    std::cout << std::endl;

    delete b;
    return 0;
}
