#include <iostream>
double miles = 62.14;
double gallon = 3.875;
int main()
{
    std::cout << "Enter please litres on 100 km: ";
    double litres_petrol;
    std::cin >> litres_petrol;
    double galon_petrols = litres_petrol / gallon;
    std::cout << "u car eat on " << miles << " -> " << galon_petrols << " petrols.\n";
    std::cout << "on 1 gallon u car can go " << miles / galon_petrols << " miles" << std::endl;
    
    return 0;
}
