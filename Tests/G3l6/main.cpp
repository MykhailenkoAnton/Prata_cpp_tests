#include <iostream>

int main()
{
    std::cout << "Enter please auto km: ";
    double km;
    std::cin >> km;
    std::cout << "Enter please auto petrol: ";
    double petrol;
    std::cin >> petrol;


    double km_per_litr = km / petrol;
    double litres_per_hungr_km = 100 / km_per_litr;

    std::cout << "on 100 km auto eat " << litres_per_hungr_km << " litres of petrol.\n";
    return 0;
}
