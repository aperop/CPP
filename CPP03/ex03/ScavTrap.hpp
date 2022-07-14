//
// Created by Denim Hawkgirl on 6/6/22.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(ScavTrap const & copy);

    ScavTrap & operator=(ScavTrap const & rhs);

    void guardGate();
};

#endif //SCAVTRAP_HPP
