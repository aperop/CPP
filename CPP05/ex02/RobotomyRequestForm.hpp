//
// Created by Denim Hawkgirl on 6/27/22.
//

#ifndef CPP05_ROBOTOMYREQUESTFORM_HPP
#define CPP05_ROBOTOMYREQUESTFORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class RobotomyRequestForm: public virtual Form {
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const & copy);
        RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

        void executeAction() const;
    };

    std::ostream & operator<<(std::ostream & out, const RobotomyRequestForm & in);


#endif //CPP05_ROBOTOMYREQUESTFORM_HPP
