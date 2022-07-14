//
// Created by Denim Hawkgirl on 5/31/22.
//

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
public:
    HumanB(std::string name);
    ~HumanB(void);

    void attack(void);
    void setWeapon(Weapon& type);

private:
    std::string name;
    Weapon* type;
};


#endif //HUMANB_HPP
