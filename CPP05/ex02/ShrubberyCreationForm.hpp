//
// Created by Denim Hawkgirl on 6/27/22.
//

#ifndef CPP05_SHRUBBERYCREATIONFORM_HPP
#define CPP05_SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <fstream>


class ShrubberyCreationForm: public virtual Form {

    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const & copy);
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

        void executeAction() const;
};

std::ostream & operator<<(std::ostream & out, const ShrubberyCreationForm & in);

#endif //CPP05_SHRUBBERYCREATIONFORM_HPP
