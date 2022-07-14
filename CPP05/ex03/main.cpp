//
// Created by Denim Hawkgirl on 6/21/22.
//

#include "Intern.hpp"

int main() {
    {
        Intern *someRandomIntern = new Intern();
        Form * f;
        f = someRandomIntern->makeForm("robotomy request", "Bender");
        delete f;
        f = someRandomIntern->makeForm("shrubbery creation", "Bender");
        delete f;
        f = someRandomIntern->makeForm("shrubber creation", "Bender");
        delete f;
    }
    return 0;
}
