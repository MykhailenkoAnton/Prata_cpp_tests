#include <iostream>
#include <fstream>
int main()
{
    std::ofstream fout;
    fout.open("carinfo.txt");

    char automobibe[50];        // ввод данных для отображения в консоле и записи потом в файл
    int year;
    double a_price;
    double d_price;
    std::cout << "Enter the make and model of automobile: ";
    std::cin.getline(automobibe, 50);
    std::cout << "Enter the model year: ";
    std::cin >> year;
    std::cout << "Enter the original asking price: ";
    std::cin >> a_price;
    d_price = a_price * 0.913;

    // Отображение информации на экране с помощью cout

    std::cout << std::fixed;
    std::cout.precision (2);
    std::cout.setf(std::ios_base::showpoint);
    std::cout << "Make and model: " << automobibe << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Was asking $" << a_price << std::endl;
    std::cout << "Now asking $" << d_price << std::endl;

    // Вывод той же информации с использованием outFile вместо cout
    fout << std::fixed;
    fout.precision (2);
    fout.setf(std::ios_base::showpoint);
    fout << "Make and model: " << automobibe << std::endl;
    fout << "Year: " << year << std::endl;
    fout << "Was asking $" << a_price << std::endl;
    fout << "Now asking $" << d_price << std::endl;
    fout.close();
    return 0;
}
