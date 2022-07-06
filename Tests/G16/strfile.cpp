#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main()
{
    std::ifstream fin;
    fin.open("tob.txt");
    if (fin.is_open() == false)
    {
        std::cerr << "Can't open file. Bye.\n"; // не удается открыть файл
        exit(EXIT_FAILURE);
    }
    std::string item;
    int count = 0;
    getline(fin, item, ':');
 
    while (fin) // до тех пор, пока нет ошибок ввода
    {
        ++count;
        std::cout << count << ": " << item << std::endl;
        getline(fin, item, ':');
    }
    std::cout << "Done\n";
    fin.close();
    return 0;
}