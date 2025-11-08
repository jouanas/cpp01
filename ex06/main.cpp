#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl Harl1;

    if(argc != 2)
        std::cout<<"\033[31m"<<"Error:Invalid argument"<<"\033[0m"<<std::endl;
    else
        Harl1.complain(argv[1]);
    return (0);
}
