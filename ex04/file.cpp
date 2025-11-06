#include "file.hpp"

void ft_error(std::string string_error)
{
    std::cout<<"\033[31m" <<string_error<< "\033[0m"<<std::endl;
        exit(1);

}

void replace_line(std::string &line, std::size_t  position, std::string s1, std::string s2)
{
    while (position != std::string::npos)
    {
        line.erase(position, s1.length());
        line.insert(position, s2);
        position = line.find(s1);
    }
}