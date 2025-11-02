#include "Zombie.hpp"


int main()
{
    randomChump("stack zombie");
   Zombie* myzombie = newZombie("heap zombie");
   myzombie->announce();
   delete myzombie;
}