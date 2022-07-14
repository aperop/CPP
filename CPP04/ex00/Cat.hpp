//
// Created by Denim Hawkgirl on 6/7/22.
//

#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Cat : public virtual Animal {
public:
    Cat();
    ~Cat();
    Cat(Cat const &copy);
    Cat &operator=(Cat const &rhs);

    void makeSound() const;
};


#endif //CPP_CAT_HPP
