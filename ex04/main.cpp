
#include "file.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
        ft_error("Error:Invalid argument . Usage ./program <filename> <s2> <s2>");
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream input_file(filename.c_str());
    if (s1.empty())
    ft_error("s1: Error: The string to find (s1) cannot be empty.");
    
    if (!input_file.is_open())
    ft_error("Error: Could not open input file");
    
    std::string file_rep = filename + ".replace";
    std::ofstream output_file(file_rep.c_str());
    if (!output_file.is_open())
        ft_error("Error: Could not create output file");
    
    std::string line;
     if (input_file.peek() == EOF)
        ft_error("Error : the file is empty");


    while (std::getline(input_file, line))
    {
        replace_line(line,s1, s2);
        output_file<<line;
        output_file<<"\n";
    }
    return (0);
}
