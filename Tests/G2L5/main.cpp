#include <iostream>
double temp_f(double);
int main()
{
    std::cout << "Please enter a Celsius value: ";
    double temp_c;
    std::cin >> temp_c;
    double fareng = temp_f(temp_c);
    std::cout << temp_c << " degrees Celsius is " << fareng << " degrees Fahrenheit.\n";
    return 0;
}
double temp_f(double a)
{
    return 1.8 * a + 32;
}