//
// Created by Denim Hawkgirl on 5/28/22.
//

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phone_book;
    std::string tmp;

    while (1)
    {
        std::cout << BLUE << "Please write a command (EXIT, ADD or SEARCH): " << OFF;
        std::getline(std::cin, tmp);
        if (std::cin.eof() == 1)
        {
            std::cout << std::endl;
            exit(0);
        }
        if (tmp == "EXIT")
            break;
        else if (tmp == "ADD")
            phone_book.add_contact();
        else if (tmp == "SEARCH")
            phone_book.show_contacts();
        else
            std::cout << RED << "Wrong command!!! Please retry." << OFF << std::endl;
    }
    return (0);
}
