#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

const char * file = "guests.txt";
int main()
{
    char ch;
    // Отображение начального содержимого
    std::ifstream fin;
    fin.open(file);

    if (fin.is_open())
    {
        std::cout << "Here are the current contents of the "
                << file << " file:\n";
        while (fin.get(ch))
        {
            std::cout << ch;
        }
        fin.close();
    }
    // Добавление новых имен
    std::ofstream fout(file, std::ios::out | std::ios::app);
    if (!fout.is_open())
    {
        std::cerr << "Can't open " << file << " file for output.\n";//не удается открыть файл
        exit(EXIT_FAILURE);
    }
    std::cout << "Enter guest names (enter a blank line to quit):\n";
    std::string name;
    while (getline(std::cin, name) && name.size() > 0)
    {
        fout << name << std::endl;
    }
    fout.close();
    // Отображение измененного файла
    fin.clear(); //не обязательно для некоторых компиляторов
    fin.open(file);
    if (fin.is_open())
    {
        std::cout << "Here are the new contents of the "
                << file << " file:\n";
        while (fin.get(ch))
        {
            std::cout << ch;
        }
        fin.close();
    }
    std::cout << "Done.\n";
    return 0;
}