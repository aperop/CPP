//
// Created by Denim Hawkgirl on 7/1/22.
//

#include <string>
#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate() {
    std::cout << "real: ";
    switch ((rand() % 3)) {
        case 0:
            std::cout << "Class A\t";
            return new A();
        case 1:
            std::cout << "Class B\t";
            return new B();
        case 2:
            std::cout << "Class C\t";
            return new C();
        default:
            return NULL;
    }
}

void identify(Base* p) {
    std::cout << "pointer: ";
    if (dynamic_cast<A *>(p)) {
        std::cout << "Class A\t";
    }
    else if (dynamic_cast<B *>(p)) {
        std::cout << "Class B\t";
    }
    else if (dynamic_cast<C *>(p)) {
        std::cout << "Class C\t";
    }
    else {
        std::cout << "Unknown Class\t";
    }
}

void identify(Base& p) {
    std::cout << "reference: ";
    try {
        (void)dynamic_cast<A &>(p);
        std::cout << "Class A\t";
        return;
    }
    catch (const std::bad_cast &e) {}
    try {
        (void)dynamic_cast<B &>(p);
        std::cout << "Class B\t";
        return;
    }
    catch (const std::bad_cast &e) {}
    try {
        (void)dynamic_cast<C &>(p);
        std::cout << "Class C\t";
        return;
    }
    catch (const std::bad_cast &e) {}
    std::cout << "Unknown Class\t";
}

int main() {
    std::srand(time(NULL));

    for (size_t i = 0; i < 10; i++) {
        Base *random = generate();

        identify(random);
        identify(*random);

        delete random;
        std::cout << std::endl;
    }
    return 0;
}