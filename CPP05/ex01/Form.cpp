//
// Created by Denim Hawkgirl on 6/27/22.
//

#include "Form.hpp"

Form::Form() {
    this->_name = "noName";
    this->_isSign = false;
    this->_signGrade = 5;
    this->_executeGrade = 5;
    std::cout << GREEN "Form constructor" OFF << std::endl;
}

Form::Form(std::string name, const int signGrade, const int executeGrade) {
    this->_name = name;
    this->_isSign = false;
    this->_signGrade = signGrade;
    this->_executeGrade = executeGrade;
    std::cout << GREEN "Form constructor with name and grades" OFF << std::endl;
}

Form::~Form() {
    std::cout << RED "Form destructor" OFF << std::endl;
}

Form::Form(Form const & copy) {
    this->_name = copy.getName();
    this->_signGrade = copy.getSignGrade();
    this->_executeGrade = copy.getExecuteGrade();
    this->_isSign = copy.getStatus();
    std::cout << "Form copy constructor" << std::endl;
}

Form & Form::operator=(Form const & rhs) {
    if (this == &rhs)
        return *this;
    this->_name = rhs.getName();
    this->_signGrade = rhs.getSignGrade();
    this->_executeGrade = rhs.getExecuteGrade();
    this->_isSign = rhs.getStatus();
    return *this;
}

std::string Form::getName() const {
    return this->_name;
}

bool Form::getStatus() const {
    return this->_isSign;
}

int Form::getSignGrade() const {
    return this->_signGrade;
}

int Form::getExecuteGrade() const {
    return this->_executeGrade;
}

void Form::beSigned(Bureaucrat const & b) {
    if (b.getGrade() <= this->getSignGrade()) {
        this->_isSign = true;
    }
    else
        throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, const Form &in)
{
    out << in.getName() << ", form is signed: " << in.getStatus() << ", grade to sign: " << in.getSignGrade() << ", grade to exec: " << in.getExecuteGrade() << ".";
    return out;
}

