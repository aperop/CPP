//
// Created by Denim Hawkgirl on 6/6/22.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    std::srand(std::time(nullptr));
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << j->getBrain()->getIdea(std::rand() % 100) << std::endl;
        std::cout << i->getBrain()->getIdea(std::rand() % 100) << std::endl;
        delete j;//should not create a leak
        delete i;
    }


    const int list_size = 4;
    Animal *animal_list[list_size];

    for (size_t i = 0; i < list_size; i++)
    {
        if (i % 2)
            animal_list[i] = new Cat();
        else
            animal_list[i] = new Dog();
    }

    for (size_t i = 0; i < list_size; i++)
    {
        std::cout << (animal_list[i])->getBrain()->getIdea(std::rand() % 100) << std::endl;
        delete animal_list[i];
    }

    return 0;
}
