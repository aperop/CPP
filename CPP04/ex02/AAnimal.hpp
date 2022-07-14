//
// Created by Denim Hawkgirl on 6/7/22.
//

#ifndef CPP_AANIMAL_HPP
#define CPP_AANIMAL_HPP

# define RED    "\033[01;31m"
# define GREEN  "\033[01;32m"
# define YELLOW "\033[01;33m"
# define BLUE   "\033[01;34m"
# define OFF    "\033[00m"

# include "Brain.hpp"

# include <string>
# include <iostream>

class AAnimal {
public:
    AAnimal();
    virtual ~AAnimal();
    AAnimal(AAnimal const &copy);
    AAnimal &operator=(AAnimal const &rhs);

    virtual void makeSound() const;
    virtual std::string getType() const;
    virtual Brain *getBrain() const = 0;

protected:
    std::string type;
};


#endif //CPP_AANIMAL_HPP
