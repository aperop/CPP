//
// Created by Denim Hawkgirl on 6/1/22.
//

#ifndef FIXED_HPP
#define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

# define RED    "\033[01;31m"
# define GREEN  "\033[01;32m"
# define YELLOW "\033[01;33m"
# define BLUE   "\033[01;34m"
# define OFF    "\033[00m"

class Fixed {
public:
    Fixed();
    Fixed(int int_num);
    Fixed(float float_num);
    Fixed(const Fixed& copy);
    ~Fixed();

    Fixed & operator=(const Fixed& copy);
    Fixed operator+( Fixed const & num );
    Fixed operator-( Fixed const & num );
    Fixed operator*( Fixed const & num );
    Fixed operator/( Fixed const & num );

    Fixed operator++( void );
    Fixed operator++( int );
    Fixed operator--( void );
    Fixed operator--( int );

    int getRawBits(void) const;
    void setRawBits(int const raw);

    int toInt(void) const;
    float toFloat(void) const;

    bool operator>(Fixed const & num) const;
    bool operator<(Fixed const & num) const;
    bool operator>=(Fixed const & num) const;
    bool operator<=(Fixed const & num) const;
    bool operator==(Fixed const & num) const;
    bool operator!=(Fixed const & num) const;

    static Fixed & max(Fixed & num1, Fixed & num2);
    static Fixed & min(Fixed & num1, Fixed & num2);

    const static Fixed & max(Fixed const & num1, Fixed const & num2);
    const static Fixed & min(Fixed const & num1, Fixed const & num2);

private:
    int fix;
    static const int fract_bit = 8;
};

std::ostream & operator<<(std::ostream& out, const Fixed& fixed);

#endif //FIXED_HPP
