//
// Created by Denim Hawkgirl on 6/27/22.
//

#ifndef CPP05_FORM_HPP
# define CPP05_FORM_HPP

# define RED    "\033[01;31m"
# define GREEN  "\033[01;32m"
# define YELLOW "\033[01;33m"
# define BLUE   "\033[01;34m"
# define OFF    "\033[00m"

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    public:
        Form();
        Form(std::string const name, int const signGrade, int const executeGrade);
        Form( std::string const name, std::string const target, int const signGrade, int const executeGrade );
        virtual ~Form();
        Form(Form const & copy);
        Form & operator=(Form const & rhs);

        std::string getName() const;
        bool getStatus() const;
        int getSignGrade() const;
        int getExecuteGrade() const;
        std::string getTarget() const;

        void beSigned(Bureaucrat const & b);

        void execute(Bureaucrat const & b) const;
        virtual void executeAction() const = 0;

        class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw() {
                return "Form couldn’t sign because Bureaucrat grade is too high.";
            }
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Form couldn’t sign because Bureaucrat grade is too low.";
                }
        };

        class NotSignedException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Form isn't signed. Sign form before execute.";
                }
        };

    private:
        std::string _name;
        bool _isSign;
        int _signGrade;
        int _executeGrade;
        std::string _target;
};

std::ostream & operator<<(std::ostream &out, const Form &in);

#endif //CPP05_FORM_HPP
