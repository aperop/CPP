//
// Created by Denim Hawkgirl on 7/1/22.
//

#ifndef CPP06_CONVERSION_HPP
# define CPP06_CONVERSION_HPP

# include <iostream>
# include <iomanip>

# define RED    "\033[01;31m"
# define GREEN  "\033[01;32m"
# define YELLOW "\033[01;33m"
# define BLUE   "\033[01;34m"
# define OFF    "\033[00m"


class Conversion {
    public:
        Conversion();
        ~Conversion();
        Conversion(std::string str);
        Conversion(Conversion & copy);

        Conversion & operator=(Conversion & rhs);

        void toChar();
        void toInt();
        void toFloat();
        void toDouble();

        std::string getStr();
        char getChar();
        int getInt();
        float getFloat();
        double getDouble();

        bool isInvalid(std::string str);

        class ErrorException: public std::exception {
            public:
                virtual const char * what() const throw() {
                    return "impossible";
                }
        };

    private:
        std::string _str;
        char _char;
        int _int;
        float _float;
        double _double;
};

#endif //CPP06_CONVERSION_HPP
