//
// Created by Denim Hawkgirl on 6/7/22.
//

#ifndef CPP_DIAMONDTRAP_HPP
#define CPP_DIAMONDTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap(DiamondTrap const & copy);

    DiamondTrap & operator=(DiamondTrap const & rhs);

    void whoAmI();

private:
    std::string name;
};

#endif //CPP_DIAMONDTRAP_HPP
