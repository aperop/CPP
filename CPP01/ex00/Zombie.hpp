//
// Created by Denim Hawkgirl on 5/30/22.
//

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

# define RED    "\033[01;31m"
# define GREEN  "\033[01;32m"
# define YELLOW "\033[01;33m"
# define BLUE   "\033[01;34m"
# define OFF    "\033[00m"

class Zombie {
public:
    Zombie(void);
    ~Zombie(void);

    void set_name(std::string name);

    void announce(void) const;

private:
    std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif //ZOMBIE_HPP
