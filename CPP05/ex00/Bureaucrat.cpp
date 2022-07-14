//
// Created by Denim Hawkgirl on 6/21/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    this->_name = "noNAME";
    this->_grade = 5;
    std::cout << GREEN "Bureaucrat constructor" OFF << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
    this->_name = name;
    std::cout << GREEN "Bureaucrat constructor with name and grade" OFF << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::~Bureaucrat() {
    std::cout << RED "Bureaucrat destructor" OFF << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) {
    this->_name = copy._name;
    this->_grade = copy._grade;
    std::cout << "Bureaucrat copy constructor" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
    if (this == &rhs)
        return *this;
    this->_name = rhs.getName();
    this->_grade = rhs.getGrade();
    return *this;
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::incrementGrade() {
    if (this->_grade > 1)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
    if (this->_grade < 150)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream & operator<<(std::ostream &out, const Bureaucrat &in)
{
    out << BLUE << in.getName() << ", bureaucrat grade " << in.getGrade() << "." OFF << std::endl;
    return out;
}
