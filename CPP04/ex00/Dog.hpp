//
// Created by Denim Hawkgirl on 6/7/22.
//

#ifndef CPP_DOG_HPP
# define CPP_DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public virtual Animal {
public:
    Dog();
    ~Dog();
    Dog(Dog const &copy);
    Dog &operator=(Dog const &rhs);

    void makeSound() const;
};


#endif //CPP_DOG_HPP
