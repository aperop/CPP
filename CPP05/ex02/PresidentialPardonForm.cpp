//
// Created by Denim Hawkgirl on 6/27/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Form", "random", 25, 5) {
    std::cout << "PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Form", target, 25, 5) {
    std::cout << "PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy.getName(), copy.getTarget(), 25, 5) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
    (void)rhs;
    return *this;
}

void PresidentialPardonForm::executeAction() const {
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}