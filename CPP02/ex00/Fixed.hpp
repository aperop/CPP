//
// Created by Denim Hawkgirl on 6/1/22.
//

#ifndef FIXED_HPP
#define FIXED_HPP

# include <string>
# include <iostream>

# define RED    "\033[01;31m"
# define GREEN  "\033[01;32m"
# define YELLOW "\033[01;33m"
# define BLUE   "\033[01;34m"
# define OFF    "\033[00m"

class Fixed {
public:
    Fixed();
    Fixed(const Fixed& copy);
    ~Fixed();

    Fixed& operator=(const Fixed& copy);

    int getRawBits(void) const;
    void setRawBits(int const raw);

private:
    int fix;
    static const int fract_bit = 8;
};


#endif //FIXED_HPP
