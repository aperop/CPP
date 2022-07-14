//
// Created by Denim Hawkgirl on 6/6/22.
//

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    std::srand(std::time(nullptr));

    {
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();

        std::cout << j->getBrain()->getIdea(std::rand() % 100) << std::endl;
        std::cout << i->getBrain()->getIdea(std::rand() % 100) << std::endl;
        delete j;//should not create a leak
        delete i;
    }


    const int list_size = 4;
    AAnimal *Aanimal_list[list_size];

    for (size_t i = 0; i < list_size; i++)
    {
        if (i % 2)
            Aanimal_list[i] = new Cat();
        else
            Aanimal_list[i] = new Dog();
    }

    for (size_t i = 0; i < list_size; i++)
    {
        std::cout << (Aanimal_list[i])->getBrain()->getIdea(std::rand() % 100) << std::endl;
        delete Aanimal_list[i];
    }

//    const AAnimal* j = new AAnimal();
//    std::cout << j->getType() << std::endl;
//    delete j;

    return 0;
}
