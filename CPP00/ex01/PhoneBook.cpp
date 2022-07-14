//
// Created by Denim Hawkgirl on 5/26/22.
//

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->contact_count = 0;
    this->contact_curr = 0;
}

PhoneBook::~PhoneBook(void) {}

void trim_string(std::string buff)
{
    const std::string spaces = "          ";

    if (buff.length() > 10)
        std::cout << buff.substr(0, 9) << ".";
    else
        std::cout << spaces.substr(0, 10 - buff.length()) << buff;
}

void PhoneBook::show_contacts(void)
{
    std::string buff;
    int id;

    if (this->contact_count == 0)
    {
        std::cout << YELLOW << "PhoneBook is empty..." << OFF << std::endl;
        return;
    }

    std::cout << GREEN << "                                             " << OFF << std::endl;
    std::cout << GREEN << "|  index   |first name| last name| nickname |" << OFF << std::endl;

    for (int i = 0; i < this->contact_count; i++)
    {
        buff = std::to_string(i);
        std::cout << "|";
        trim_string(buff);
        std::cout << "|";

        buff = this->contact_list[i].get_first_name();
        trim_string(buff);
        std::cout << "|";

        buff = this->contact_list[i].get_last_name();
        trim_string(buff);
        std::cout << "|";

        buff = this->contact_list[i].get_nickname();
        trim_string(buff);
        std::cout << "|";
        std::cout << std::endl;
    }

    std::cout << YELLOW << "Please enter the contact index: " << OFF;
    std::getline(std::cin, buff);
    if (std::cin.eof() == 1)
    {
        std::cout << std::endl;
        exit(0);
    }
    if (buff.length() == 0)
        return;
    for (size_t i = 0; i < buff.length(); i++)
    {
        if (!isdigit(buff[i]))
        {
            std::cout << RED << "Index must be non-negative integer!!!" << OFF << std::endl;
            return;
        }
    }

    id = std::stoi(buff);
    if (id < 0 || id >= this->contact_count)
        std::cout << RED << "Index out of range!!!" << OFF << std::endl;
    else
    {
        std::cout << YELLOW << "First name: " << OFF << this->contact_list[id].get_first_name() << std::endl;
        std::cout << YELLOW << "Last name: " << OFF << this->contact_list[id].get_last_name() << std::endl;
        std::cout << YELLOW << "Nickname: " << OFF << this->contact_list[id].get_nickname() << std::endl;
        std::cout << YELLOW << "Phone number: " << OFF << this->contact_list[id].get_phone_number() << std::endl;
        std::cout << YELLOW << "Darkest secret: " << OFF << this->contact_list[id].get_darkest_secret() << std::endl;
    }
}

void PhoneBook::add_contact(void)
{
    std::string tmp[5];
    Contact *contact;
    std::string contact_info[] = {
            "First name: ",
            "Last name: ",
            "Nickname: ",
            "Phone number: ",
            "Darkest secret: "
    };
    contact = this->get_contact();
    std::cout << std::endl;
    std::cout << YELLOW << "To create a new contact need next information" << OFF << std::endl;

    for (std::size_t i = 0; i < sizeof(contact_info) / sizeof(*contact_info); i++)
    {
        std::cout << YELLOW << contact_info[i] << OFF;
        std::getline(std::cin, tmp[i]);
        if (std::cin.eof() == 1)
        {
            std::cout << std::endl;
            exit(0);
        }
        if (tmp[i].length() == 0)
        {
            std::cout << RED << "Field cannot be empty!!! Please retry." << OFF << std::endl;
            --i;
        }
    }
    contact->set_first_name(tmp[0]);
    contact->set_last_name(tmp[1]);
    contact->set_nickname(tmp[2]);
    contact->set_phone_number(tmp[3]);
    contact->set_darkest_secret(tmp[4]);
    if (this->contact_count < MAX_CONTACT)
        this->contact_count++;
    this->contact_curr++;
}

Contact *PhoneBook::get_contact(void)
{
    if (this->contact_curr >= MAX_CONTACT)
    {
        std::cout << YELLOW << "PhoneBook is full..." << OFF << std::endl;
        std::cout << YELLOW << "The oldest contact will be replace by the new contact." << OFF << std::endl;
        this->contact_curr = 0;
    }
    return (&this->contact_list[this->contact_curr]);
}
