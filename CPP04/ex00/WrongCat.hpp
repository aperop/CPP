//
// Created by Denim Hawkgirl on 6/7/22.
//

#ifndef CPP_WRONGCAT_HPP
#define CPP_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public virtual WrongAnimal {
public:
    WrongCat();
    ~WrongCat();
    WrongCat(WrongCat const &copy);
    WrongCat &operator=(WrongCat const &rhs);

    void makeSound() const;
};


#endif //CPP_WRONGCAT_HPP
