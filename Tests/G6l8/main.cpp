#include <iostream>
#include <fstream>
#include <cstdlib>
int main()
{
    std::ifstream fin;
    fin.open("text.txt");

    char ch;
    if (!fin.is_open())
    {
        std::cout << "Not open file\n";
        exit(EXIT_FAILURE);
    }
    int count = 0;
    fin >> ch;
    while (fin.good())
    {
        count++;
        fin >> ch;
    }
    if(fin.eof())
    {
        std::cout << "File is end!\n";
    }
    else if (fin.fail())
    {
        std::cout << "Input terminated by data mismatch.\n";
    }
    else{
        std::cout << "unknown\n";
    }
    if (count == 0)
    {
        std::cout << "No data\n";
    }
    else
    {
        std::cout << "in file " << count << " chars!\n";
    }
    fin.close();
    return 0;
}