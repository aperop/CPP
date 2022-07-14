//
// Created by Denim Hawkgirl on 6/27/22.
//

#ifndef CPP05_PRESIDENTIALPARDONFORM_HPP
# define CPP05_PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public virtual Form {

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const & copy);
        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

        void executeAction() const;
};

std::ostream & operator<<(std::ostream & out, const PresidentialPardonForm & in);

#endif //CPP05_PRESIDENTIALPARDONFORM_HPP
