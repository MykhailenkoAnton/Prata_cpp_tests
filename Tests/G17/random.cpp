#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>

struct planet
{
    char name[20];
    double population;
    double g; // ускорение свободного падения
};

const char * file = "planets.txt";
const int LIM = 20;
inline void eatline() {while (std::cin.get() != '\n') continue;}


int main()
{
    planet p1;
    std::cout << std::fixed;
    // Отображение начального содержимого
    std::fstream finout;
    finout.open(file , std::ios_base::in | std::ios_base::out | std::ios_base::binary);

    int ct = 0;

    if (finout.is_open())
    {
        finout.seekg(0); // перейти в начало
        std::cout << "Here are the current contents of the "
                << file << " file:\n";
        while (finout.read((char *)& p1, sizeof (p1)))
        {
            std::cout << ct++ << ": " << std::setw(LIM) << p1.name << ": "
                    << std::setprecision(0) << std::setw(12) << p1.population
                    << std::setprecision(2) << std::setw(6) << p1.g << std::endl;
        }
        if (finout.eof())
        {
            finout.clear(); // очистить флаг eof
        }
        else
        {
            std::cerr << "Error in reading " << file << ".\n";
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        std::cerr << file << " could not be opened — bye.\n";
        exit(EXIT_FAILURE);
    }
    // Изменить запись
    std::cout << "Enter the record number you wish to change: ";
    long rec;
    std::cin >> rec;
    eatline(); // избавление от символов новой строки
    if (rec < 0 || rec >= ct)
    {
        std::cerr << "Invalid record number — bye\n";
        exit(EXIT_FAILURE);
    }
    std::streampos place = rec * sizeof(p1); // преобразование в тип streampos
    finout.seekg(place); // произвольный доступ
    if (finout.fail())
    {
        std::cerr << "Error on attempted seek\n";
        exit(EXIT_FAILURE);
    }
    finout.read((char *)& p1, sizeof (p1));
    std::cout << "Your selection:\n";
    std::cout << rec << ": " << std::setw(LIM) << p1.name << ": "
                    << std::setprecision(0) << std::setw(12) << p1.population
                    << std::setprecision(2) << std::setw(6) << p1.g << std::endl;
    if (finout.eof())
    {
        finout.clear(); // очистить флаг eof
    }
    std::cout << "Enter planet name: ";
    std::cin.get(p1.name, 20);
    eatline();
    std::cout << "Enter planetary population: ";
    std::cin >> p1.population;
    std::cout << "Enter planet's acceleration of gravity: ";
    std::cin >> p1.g;

    finout.seekp(place);

    finout.write((char *)& p1, sizeof (p1)) << std::flush;
    if (finout.fail())
    {
        std::cerr << "Error on attempted write\n";
        exit(EXIT_FAILURE);
    }

    // Отображение измененного файла
    ct = 0;
    finout.seekg(0); // перейти в начало файла
    std::cout << "Here are the new contents of the "
                << file << " file:\n";
    while (finout.read((char *)& p1, sizeof (p1)))
    {
        std::cout << ct++ << ": " << std::setw(LIM) << p1.name << ": "
                << std::setprecision(0) << std::setw(12) << p1.population
                << std::setprecision(2) << std::setw(6) << p1.g << std::endl;
    }
    finout.close();
    std::cout << "Done\n";
    return 0;
}



// #include <cstdio>
// #include <iostream>
// int main ()
// {
// using namespace std;
// cout << "This system can generate up to " << TMP_MAX
// << " temporary names of up to " << L_tmpnam
//  << " characters. \n";
//  char pszName[ L_tmpnam ] = { '\0' };
// cout << "Here are ten names :\n";
// for( int i=0; 10 > i; i++ )
// {
//  tmpnam( pszName ) ;
//  cout << pszName << endl;
// }
// return 0;
// }