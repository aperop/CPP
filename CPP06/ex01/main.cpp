//
// Created by Denim Hawkgirl on 7/1/22.
//

#include "Data.hpp"
#include <string>
#include <iostream>
# include <iomanip>

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main() {

    Data *data = new Data();

    std::cout << std::endl << data->getName() << std::endl;
    std::cout << data << std::endl << std::endl;

    uintptr_t serialize_data;
    serialize_data = serialize(data);

    std::cout << &serialize_data << std::endl;
    std::cout << serialize_data << std::endl << std::endl;

    data = deserialize(serialize_data);
    std::cout << data->getName() << std::endl;
    std::cout << data << std::endl;

    delete data;
    return 0;
}