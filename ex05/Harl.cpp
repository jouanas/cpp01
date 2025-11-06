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
    std::string functions[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    pointer_member function[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    while (i < 4)
    {
        if (functions[i] == level)
           (this->*function[i])();
        i++;
    }
}
Harl:: Harl()
{
}