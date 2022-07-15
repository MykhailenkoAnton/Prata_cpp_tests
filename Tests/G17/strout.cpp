#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::ostringstream outstr; // управляет строковым потоком
    std::string hdisk;
    std::cout << "What's the name of your hard disk? ";
    getline(std::cin, hdisk);
    int cap;
    std::cout << "What's its capacity in GB? ";
    std::cin >> cap;
    // Запись форматированной информации в строковый поток
    outstr << "The hard disk " << hdisk << " has a capacity of " << cap << " gigabytes. \n";
    std::string resuzlt = outstr.str(); // сохранение результата
    std::cout << resuzlt << std::endl;
    return 0;
}