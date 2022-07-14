//
// Created by Denim Hawkgirl on 5/31/22.
//

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string name, Weapon& type);
    ~HumanA(void);

    void attack(void);

private:
    std::string name;
    Weapon& type;
};


#endif //HUMANA_HPP
