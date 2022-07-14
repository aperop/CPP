//
// Created by Denim Hawkgirl on 6/21/22.
//

#ifndef EX00_HPP
# define EX00_HPP

# define RED    "\033[01;31m"
# define GREEN  "\033[01;32m"
# define YELLOW "\033[01;33m"
# define BLUE   "\033[01;34m"
# define OFF    "\033[00m"

# include "iostream"
# include "string"
# include "Form.hpp"

class Form;

class Bureaucrat {

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const & copy);
        Bureaucrat & operator=(Bureaucrat const & rhs);

        std::string getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();

        void signForm(Form & f) const;
        void executeForm(Form const & f) const;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Grade is too high. Max grade is 1.";
                }
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Grade is too low. Min grade is 150.";
                }
        };

    private:
        std::string _name;
        int _grade;
};

std::ostream & operator<<(std::ostream &out, const Bureaucrat &in);

#endif //EX00_HPP