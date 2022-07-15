#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

inline void eatline() {while (std::cin.get() != '\n') continue;}

const char * file1 = "file1.txt";
const char * file2 = "file2.txt";
const char * file3 = "result.txt";

int main()
{
    std::ifstream fin1(file1, std::ios::in);
    std::ifstream fin2(file2, std::ios::in);
    std::ofstream result(file3);
    std::string time_buff_file1;
    char ch;
    while (!fin1.eof() || !fin2.eof())
    {
        if (fin1.is_open())
        {
            getline(fin1, time_buff_file1);
        }
        else
        {
            std::cout << "Error\n";
            exit(EXIT_FAILURE);
        }
        std::cout << time_buff_file1;
        std::cout << std::endl;

        std::string time_buff_file2;
        if (fin1.is_open())
        {
            getline(fin2, time_buff_file2);
        }
        else
        {
            std::cout << "Error\n";
            exit(EXIT_FAILURE);
        }
        std::cout << time_buff_file2;
        std::cout << std::endl;

        time_buff_file1 += ' ';
        time_buff_file1 += time_buff_file2;
        std::cout << time_buff_file1 << std::endl;

        if (result.is_open())
        {
            result << time_buff_file1;
            result << std::endl;
        }
        else
        {
            std::cout << "cant open file\n";
        }
    }
    
    
    return 0;
}