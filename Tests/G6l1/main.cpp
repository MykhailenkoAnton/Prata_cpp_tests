#include <iostream>
#include <fstream>
#include <cstdlib>
const int Size = 50;
int main()
{
    // std::ofstream fout;
    // fout.open("carinfo.txt");

    // char automobibe[50];        // ввод данных для отображения в консоле и записи потом в файл
    // int year;
    // double a_price;
    // double d_price;
    // std::cout << "Enter the make and model of automobile: ";
    // std::cin.getline(automobibe, 50);
    // std::cout << "Enter the model year: ";
    // std::cin >> year;
    // std::cout << "Enter the original asking price: ";
    // std::cin >> a_price;
    // d_price = a_price * 0.913;

    // // Отображение информации на экране с помощью cout

    // std::cout << std::fixed;
    // std::cout.precision (2);
    // std::cout.setf(std::ios_base::showpoint);
    // std::cout << "Make and model: " << automobibe << std::endl;
    // std::cout << "Year: " << year << std::endl;
    // std::cout << "Was asking $" << a_price << std::endl;
    // std::cout << "Now asking $" << d_price << std::endl;

    // // Вывод той же информации с использованием outFile вместо cout
    // fout << std::fixed;
    // fout.precision (2);
    // fout.setf(std::ios_base::showpoint);
    // fout << "Make and model: " << automobibe << std::endl;
    // fout << "Year: " << year << std::endl;
    // fout << "Was asking $" << a_price << std::endl;
    // fout << "Now asking $" << d_price << std::endl;
    // fout.close();

    std::fstream fin;
    char filename[Size];
    std::cout << "Enter name of data file: ";
    std::cin.getline(filename, Size);
    fin.open(filename);
    if (!fin.is_open())
    {
        std::cout << "Could not open the file " << filename << std::endl;
        std::cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double sum = 0.0;
    double value;
    int count = 0;
    fin >> value;
    while (fin.good())
    {
        ++count;
        sum += value;
        fin >> value;
    }
    if (fin.eof())
    {
        std::cout << "End of file reached.\n";
    }
    else if (fin.fail())
    {
        std::cout << "Input terminated by data mismatch.\n";
    }
    else
    {
        std::cout << "Input terminated for unknown reason.\n";
    }
    if (count == 0)
    {
        std::cout << "No data processed.\n";
    }
    else
    {
        std::cout << "Items read: " << count << std::endl;
        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Average: " << sum / count << std::endl;
    }
    
    fin.close();
    return 0;
}
