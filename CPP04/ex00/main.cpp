//
// Created by Denim Hawkgirl on 6/6/22.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;


    std::cout << std::endl;
    const WrongAnimal *wrong_meta = new WrongAnimal();
    const WrongAnimal *c = new WrongCat();
    std::cout << wrong_meta->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    c->makeSound();
    wrong_meta->makeSound();

    const WrongCat *wrong_cat = new WrongCat();
    wrong_cat->makeSound();

    delete wrong_meta;
    delete c;
    delete wrong_cat;

    return 0;
}