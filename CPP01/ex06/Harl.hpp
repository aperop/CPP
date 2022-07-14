//
// Created by Denim Hawkgirl on 5/31/22.
//

#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>

# define RED    "\033[01;31m"
# define GREEN  "\033[01;32m"
# define YELLOW "\033[01;33m"
# define BLUE   "\033[01;34m"
# define OFF    "\033[00m"

class Harl
{
public:
    Harl(void);
    ~Harl(void);

    void complain(std::string level);

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};

#endif // HARL_H
