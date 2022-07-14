//
// Created by Denim Hawkgirl on 5/26/22.
//

#ifndef CPP00_CONTACT_HPP
# define CPP00_CONTACT_HPP


# include <iostream>

class Contact
{
public:
    Contact(void);
    ~Contact(void);

    std::string get_first_name(void) const;
    std::string get_last_name(void) const;
    std::string get_nickname(void) const;
    std::string get_phone_number(void) const;
    std::string get_darkest_secret(void) const;

    void set_first_name(const std::string first_name);
    void set_last_name(const std::string last_name);
    void set_nickname(const std::string nickname);
    void set_phone_number(const std::string phone_number);
    void set_darkest_secret(const std::string darkest_secret);

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

#endif //CPP00_CONTACT_HPP
