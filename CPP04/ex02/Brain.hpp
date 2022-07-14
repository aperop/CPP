//
// Created by Denim Hawkgirl on 6/8/22.
//

#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP

#include <string>
#include <iostream>

# define RED    "\033[01;31m"
# define GREEN  "\033[01;32m"
# define YELLOW "\033[01;33m"
# define BLUE   "\033[01;34m"
# define OFF    "\033[00m"

class Brain {
public:
    Brain();
    ~Brain();
    Brain(Brain const &copy);
    Brain &operator=(Brain const &rhs);

    std::string getIdea(int index) const;

private:
    std::string ideas[100];
};


#endif //CPP_BRAIN_HPP
