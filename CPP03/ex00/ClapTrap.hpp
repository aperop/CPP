//
// Created by Denim Hawkgirl on 6/6/22.
//

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

# define RED    "\033[01;31m"
# define GREEN  "\033[01;32m"
# define YELLOW "\033[01;33m"
# define BLUE   "\033[01;34m"
# define OFF    "\033[00m"

class ClapTrap {
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(ClapTrap const & copy);
    ClapTrap & operator=(ClapTrap const & rhs);

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:
    std::string name;
    int			hit_points;
    int			energy_points;
    int			attack_damage;
};


#endif //CLAPTRAP_HPP
