#ifndef ZOMBIE_H
#define ZOMBIE_H


#include <iostream>
#include <string.h>
#include <iomanip>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
    void announce( void );
    void set_name(std::string name);
};

    Zombie* zombieHorde( int N, std::string name );

#endif