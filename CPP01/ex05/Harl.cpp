//
// Created by Denim Hawkgirl on 5/31/22.
//

#include "Harl.hpp"


#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}


void Harl::debug(void)
{
    std::cout << BLUE << "I love having extra bacon for my "
                         "7XL-double-cheese-triple-pickle-special-ketchup burger. "
                         "I really do!" << OFF <<std::endl;
}

void Harl::info(void)
{
    std::cout << GREEN << "I cannot believe adding extra bacon costs more money. "
                          "You didn’t put enough bacon in my burger! "
                          "If you did, I wouldn’t be asking for more!" << OFF << std::endl;
}

void Harl::warning(void)
{
    std::cout << YELLOW << "I think I deserve to have some extra bacon for free. "
                           "I’ve been coming for years whereas "
                           "you started working here since last month." << OFF << std::endl;
}

void Harl::error(void)
{
    std::cout << RED << "This is unacceptable! "
                        "I want to speak to the manager now." << OFF << std::endl;
}

void Harl::complain(std::string level)
{
    const	std::string complain[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    typedef void (Harl::*pFunc)(void);
    pFunc fArr[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (size_t i = 0; i < complain->size(); i++)
        if (level == complain[i])
            (this->*(fArr[i]))();
}
