#include <iostream>
double astr_years(double);
int main()
{
    std::cout << "Enter the number of light years: ";
    double l_years;
    std::cin >> l_years;
    double a_years = astr_years(l_years);
    std::cout << l_years << " light years = " << a_years << " astronomical units.\n";
    return 0;
}
double astr_years(double y)
{
    return y * 63240;
}