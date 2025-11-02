#include "Zombie.hpp"

int main()
{
    int index = 0;
    Zombie* Zombies = zombieHorde(5, "salma");
    while (index < 5)
    {
        Zombies[index].announce(); 
        index++;
    }
    delete[] Zombies;
}