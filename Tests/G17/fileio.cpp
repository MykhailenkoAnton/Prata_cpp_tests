#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string filename;
    std::cout << "Enter name for new file: "; // запрос имени нового файла
    std::cin >> filename;

    // Создание объекта выходного потока для нового файла и назначение ему имени fout
    std::ofstream fout(filename.c_str());
    fout << "For your eyes only!\n"; // запись в файл
    std::cout << "Enter your secret number: "; // вывод на экран
    float secret;
    std::cin >> secret;
    fout << "Your secret number is " << secret << std::endl;
    fout.close();
    // Создание объекта входного потока для нового файла и назначение ему имени fin
    std::ifstream fin(filename.c_str());
    std::cout << "Here are the contents of " << filename << ":\n";
    char ch;
    while (fin.get(ch))   // чтение символа из файла
    {
        std::cout << ch; // и его вывод на экран
    }
    std::cout << "Done\n";
    fin.close();
    return 0;
}