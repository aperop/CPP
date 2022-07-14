//
// Created by Denim Hawkgirl on 6/27/22.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery Form", "random", 145, 134) {
    std::cout << "ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery Form", target, 145, 137) {
    std::cout << "ShrubberyCreationForm constructor with target" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy): Form(copy.getName(), copy.getTarget(), 145, 137) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
    (void)rhs;
    return *this;
}

void ShrubberyCreationForm::executeAction() const {
    std::ofstream file;
    file.open(this->getTarget() + "_shrubbery");

    file << "     __ _.--..--._ _"           << std::endl;
    file << " .-' _/   _/\\_   \\_'-."         << std::endl;
    file << "|__ /   _/\\__/\\_   \\__|"        << std::endl;
    file << "   |___/\\_\\__/  \\___|"          << std::endl;
    file << "          \\__/"                 << std::endl;
    file << "          \\__/"                 << std::endl;
    file << "           \\__/"                << std::endl;
    file << "            \\__/"               << std::endl;
    file << "     ________\\__/_______"       << std::endl;
    file << " _____________________________" << std::endl;

    file.close();
}