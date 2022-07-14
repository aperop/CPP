//
// Created by Denim Hawkgirl on 6/27/22.
//

#include "RobotomyRequestForm.hpp"
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Form", "random", 72, 45) {
    std::cout << "RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Form", target, 72, 45) {
    std::cout << "RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy.getName(), copy.getTarget(), 72, 45) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
    (void)rhs;
    return *this;
}

void RobotomyRequestForm::executeAction() const {
    std::srand (time(NULL));
    std::system("ARG=рзрзрзрзрзрзрзрзрзрзррзрзрзрзрзрзрзрзр; say --voice=Yuri $ARG 2> /dev/null | echo $ARG");
    if (std::rand() % 2)
        std::cout << this->getTarget() << " has been robotomized!" << std::endl;
    else
        std::cout << this->getTarget() << " robotomy failed." << std::endl;
}