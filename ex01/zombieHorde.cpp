#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int index = 0;

    Zombie* Zombies =  new Zombie[N];
    while (index < N)
    {
        Zombies[index].set_name(name);
        index++;
    }
    return Zombies;
}