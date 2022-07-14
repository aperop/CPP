//
// Created by Denim Hawkgirl on 6/7/22.
//

#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP

# define RED    "\033[01;31m"
# define GREEN  "\033[01;32m"
# define YELLOW "\033[01;33m"
# define BLUE   "\033[01;34m"
# define OFF    "\033[00m"

# include <string>
# include <iostream>

class Animal {
public:
    Animal();
    virtual ~Animal();
    Animal(Animal const &copy);
    Animal &operator=(Animal const &rhs);

    virtual void makeSound() const;
    std::string getType() const;

protected:
    std::string type;
};


#endif //CPP_ANIMAL_HPP
