#include "file.hpp"

void ft_error(std::string string_error)
{
    std::cout<<"\033[31m" <<string_error<< "\033[0m"<<std::endl;
        exit(1);
}

void replace_line(std::string &line, std::string s1, std::string s2)
{
        std::size_t  position = 0;
    while (true)
    {
        position = line.find(s1, position);
        if (position == std::string::npos)
            break;
        line.erase(position, s1.length());
        line.insert(position, s2);
        position += s2.size();
    }
}