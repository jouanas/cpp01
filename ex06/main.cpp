#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl Harl1;

    if(argc != 2)
        std::cout<<"\033[31m"<<"Error:Invalid argument"<<"\033[0m"<<std::endl;
    else
    {
        int i = 0;
        int choice = -1;
        std::string level = argv[1];
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
            Harl1.complain("DEBUG");
        case 1:
            Harl1.complain("INFO");
        case 2:
            Harl1.complain("WARNING");
        case 3:
            Harl1.complain("ERROR");
            break;
       default:
            std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
        break;
       }

    }
    return (0);
}
