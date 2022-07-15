#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
inline void eatline() {while (std::cin.get() != '\n') continue;}
struct planet
{
    char name[20];
    double population;
    double g; // ускорение свободного падения
};
const char * file = "planets.txt";

int main()
{
    planet p1;
    std::cout << std::fixed << std::right;

    // Отображение начального содержимого
    std::ifstream fin;
    fin.open(file, std::ios_base::in | std::ios_base::binary);

    if (fin.is_open())
    {
        std::cout << "Here are the current contents of the "
                << file << " file:\n";
        while (fin.read((char *)& p1, sizeof (p1)))
        {
            std::cout << std::setw(20) << p1.name << ": "
                    << std::setprecision(0) << std::setw(12) << p1.population
                    << std::setprecision(2) << std::setw(6) << p1.g << std::endl;
        }
        fin.close();
    }
    // Добавление новых данных
    std::ofstream fout(file, std::ios_base::out | std::ios_base::app | std::ios_base::binary);
    if (!fout.is_open())
    {
        std::cerr << "Can't open " << file << " file for output:\n";
        exit(EXIT_FAILURE);
    }
    std::cout << "Enter planet name (enter a blank line to quit):\n"; // ввод названия планеты
    std::cin.get(p1.name, 20);
    while (p1.name[0] != '\0')
    {
        eatline();
        std::cout << "Enter planetary population: ";
        std::cin >> p1.population;
        std::cout << "Enter planet's acceleration of gravity: ";
            // Ввод ускорения свободного падения
        std::cin >> p1.g;
        eatline();
        fout.write((char *)& p1, sizeof(p1));
        std::cout << "Enter planet name (enter a blank line "
                    "to quit):\n"; // ввод названия планеты
        std::cin.get(p1.name, 20);
    }
    fout.close();
    
    // Отображение измененного файла
    fin.clear(); // не обязательно в некоторых реализациях, но это не помешает
    fin.open(file, std::ios_base::in | std::ios_base::binary);

    if (fin.is_open())
    {
        std::cout << "Here are the new contents of the "
                << file << " file:\n";
        while (fin.read((char *)& p1, sizeof (p1)))
        {
            std::cout << std::setw(20) << p1.name << ": "
                    << std::setprecision(0) << std::setw(12) << p1.population
                    << std::setprecision(2) << std::setw(6) << p1.g << std::endl;
        }
        fin.close();
    }
    std::cout << "Done.\n";
    return 0;
}