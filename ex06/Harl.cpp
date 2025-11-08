#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout<<"\033[95m"<<"This lettuce is a bit wilty."<<"\033[0m"<<std::endl;
}
void Harl::info( void )
{
    std::cout<<"\033[34m"<<"I asked for no onions, and I can see onions."<<"\033[0m"<<std::endl;
}
void Harl::warning( void )
{
    std::cout<<"\033[33m"<<"If this isn't free, I'm going to leave a bad review."<<"\033[0m"<<std::endl;
}
void Harl::error( void )
{
    std::cout<<"\033[31m"<<"My order is wrong! This is unacceptable!"<<"\033[0m"<<std::endl;
}

  
void Harl::complain( std::string level )
{
    int i = 0;
    int choice = -1;
    std::string functions[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
   while (i < 4)
       {
           if (functions[i] == level)
               {
                   choice = i;
                   break;
               }
           i++;
       }
       switch (choice)
       {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
       default:
            std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
            break;
       }


}

Harl:: Harl()
{
}