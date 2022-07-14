//
// Created by Denim Hawkgirl on 6/6/22.
//

#ifndef CPP_FRAGTRAP_HPP
# define CPP_FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(FragTrap const & copy);

    FragTrap & operator=(FragTrap const & rhs);

    void highFivesGuys();
};

#endif //CPP_FRAGTRAP_HPP
