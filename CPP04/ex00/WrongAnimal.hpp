//
// Created by Denim Hawkgirl on 6/7/22.
//

#ifndef CPP_WRONGANIMAL_HPP
#define CPP_WRONGANIMAL_HPP

# define RED    "\033[01;31m"
# define GREEN  "\033[01;32m"
# define YELLOW "\033[01;33m"
# define BLUE   "\033[01;34m"
# define OFF    "\033[00m"

# include <string>
# include <iostream>

class WrongAnimal {
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal const &copy);
    WrongAnimal &operator=(WrongAnimal const &rhs);

    void makeSound() const;
    std::string getType() const;

protected:
    std::string type;
};



#endif //CPP_WRONGANIMAL_HPP
