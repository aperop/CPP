//
// Created by Denim Hawkgirl on 6/8/22.
//

#include "Brain.hpp"

Brain::Brain() {
    std::cout << GREEN "Brain constructor" OFF << std::endl;

    for (int i = 0; i < 100; ++i) {
        switch ((std::rand()) % 7 + 1) {
            case 1: {this->ideas[i] = "I am cat?"; break;}
            case 2: {this->ideas[i] = "I am dog?"; break;}
            case 3: {this->ideas[i] = "I am cat or dog?"; break;}
            case 4: {this->ideas[i] = "I am human?"; break;}
            case 5: {this->ideas[i] = "I am CatDog?"; break;}
            case 6: {this->ideas[i] = "I am alien?"; break;}
            case 7: {this->ideas[i] = "I am hungry"; break;}
        }
    }
}

Brain::~Brain() {
    std::cout << RED "Brain destructor" OFF << std::endl;
}

Brain::Brain(Brain const &copy) {
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = copy.ideas[i];
    }
}

Brain &Brain::operator=(Brain const &rhs) {
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = rhs.ideas[i];
    }
    return *this;
}

std::string Brain::getIdea(int index) const {
    if (index > 0 && index < 100)
        return this->ideas[index];
    return this->ideas[0];
}
