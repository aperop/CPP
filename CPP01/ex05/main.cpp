//
// Created by Denim Hawkgirl on 5/31/22.
//

#include "Harl.hpp"

int main(void)
{
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("NotInTheList");
    return 0;
}