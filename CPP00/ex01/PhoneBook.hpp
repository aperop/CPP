//
// Created by Denim Hawkgirl on 5/26/22.
//

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_CONTACT 8

# define RED    "\033[01;31m"
# define GREEN  "\033[04;32m"
# define YELLOW "\033[01;33m"
# define BLUE   "\033[01;34m"
# define OFF    "\033[00m"

class PhoneBook
{
public:
    PhoneBook(void);
    ~PhoneBook(void);

    void show_contacts(void);
    void add_contact(void);

    Contact *get_contact(void);

private:
    Contact contact_list[MAX_CONTACT];
    int contact_count;
    int contact_curr;
};

#endif //PHONEBOOK_HPP
