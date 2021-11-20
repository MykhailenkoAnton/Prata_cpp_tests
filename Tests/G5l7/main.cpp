#include <iostream>
#include <string>
struct car
{
    std::string name_car;
    int cars_year;
};
int main()
{
    std::cout << "Please, enter quantity auto: ";
    int quantity;
    std::cin >> quantity;
    std::cin.get(); // !!!!!!!
    car * cr = new car[quantity];
    for (int i = 0; i < quantity; i++)
    {
        std::cout << "Enter auto name: ";
        getline(std::cin, cr[i].name_car);
        std::cout << "Enter auto year: ";
        std::cin >> cr[i].cars_year;
        std::cin.get();
    }
    std::cout << "U Collection: " << std::endl;
    for (int i = 0; i < quantity; i++)
    {
        std::cout << cr[i].cars_year << " " << cr[i].name_car << std::endl;
    }
    delete [] cr;
    
    return 0;
}
// int main()
// {
//     std::cout << "Please, enter quantity auto: ";
//     int quantity;
//     std::cin >> quantity;
//     car * cr = new car[quantity];
//     int i = 0;
//     int y = 1;
//     while (i < quantity)
//     {
//         std::cout << "In " << y << " years" << std::endl;
//         std::cout << "Enter auto name: ";
//         std::cin >> cr[i].name_car;
//         std::cout << "Enter auto year: ";
//         std::cin >> cr[i].cars_year;
//         i++;
//         y++;
//     }
//     std::cout << "U Collection: " << std::endl;
//     for (int i = 0; i < quantity; i++)
//     {
//         std::cout << i + 1 << " YEARS: " << std::endl;
//         std::cout << cr[i].cars_year << " " << cr[i].name_car << std::endl;
//     }
//     delete [] cr;
//     return 0;
// }