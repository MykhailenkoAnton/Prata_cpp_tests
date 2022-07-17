#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include "Store.h"

void ShowStr(std::string & s);
void GetStrs(std::ifstream & os, std::vector<std::string> & vs);
int main()
{
    std::vector<std::string> vostr;
    std::string temp;
    // Получить строки
    std::cout << "Enter strings (empty line to quit) :\n"; // запрос на ввод строк
    while (getline(std::cin, temp) && temp[0] != '\0')
    {
        vostr.push_back(temp);
    }
    std::cout << "Here is your input. \n"; // вывод введенных строк
    std::for_each(vostr.begin(), vostr.end(), ShowStr);

    // Сохранить в файле
    std::ofstream fout("stings.txt", std::ios_base::out | std::ios_base::binary);
    std::for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    std::vector<std::string> vistr;
    std::ifstream fin("stings.txt", std::ios_base::in | std::ios_base::binary);
    if (!fin.is_open())
    {
        std::cerr << "Could not open file for input. \n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    std::cout << "\nHere are the strings read from the file:\n"; // строки, прочитанные из файла
    // std::cout << vistr.size()<<std::endl;
    std::for_each(vistr.begin(), vistr.end(), ShowStr);
    return 0;
}

void ShowStr(std::string & s)
{
    std::cout << s << std::endl;
}

void GetStrs(std::ifstream & iff, std::vector<std::string> & vs)
{
    // std::cout << sizeof(vs);
    iff.read((char*) &vs, sizeof(vs));
}
