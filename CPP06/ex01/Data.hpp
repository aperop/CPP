//
// Created by Denim Hawkgirl on 7/1/22.
//

#ifndef CPP06_DATA_HPP
#define CPP06_DATA_HPP

#include <string>
#include <iostream>

class Data {
    public:
        Data();
        Data(std::string const name);
        ~Data();
        Data(Data const &copy);
        Data &operator=(Data const &rhs);

        std::string getName() const;

    private:
        std::string _name;
};

#endif //CPP06_DATA_HPP
