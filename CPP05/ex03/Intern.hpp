//
// Created by Denim Hawkgirl on 6/30/22.
//

#ifndef CPP05_INTERN_HPP
# define CPP05_INTERN_HPP

# include <string>
# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern {
    public:
        Intern();
        ~Intern();
        Intern(Intern const & copy);
        Intern & operator=(Intern const & rhs);

        Form * makeForm(std::string name, std::string target) const;
};

#endif //CPP05_INTERN_HPP
