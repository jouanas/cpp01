
#include "file.hpp"
// std::ifstream == input file this is the read file 
// It connects to a file, and you can only get data from it (read from the file).
// You use >> or std::getline() to pull data out.
// =====================================================

// std::ofstream (Output File Stream)

// This is your "write" pipe. It's just like std::cout.

// It connects to a file, and you can only send data to it (write to the file).

// You use << to send data in.

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
        std::size_t  position = line.find(s1);
        if (position != std::string::npos) //npos is for no position is just a very large number ;
        {
            replace_line(line, position, s1, s2);
        }
        output_file<<line;
        output_file<<"\n";
    }
    return (0);
}


// stream is 