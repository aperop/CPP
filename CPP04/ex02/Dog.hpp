//
// Created by Denim Hawkgirl on 6/7/22.
//

#ifndef CPP_DOG_HPP
# define CPP_DOG_HPP

# include <string>
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public virtual AAnimal {
public:
    Dog();
    ~Dog();
    Dog(Dog const &copy);
    Dog &operator=(Dog const &rhs);

    void makeSound() const;
    Brain *getBrain() const;

private:
    Brain *brain;
};


#endif //CPP_DOG_HPP
