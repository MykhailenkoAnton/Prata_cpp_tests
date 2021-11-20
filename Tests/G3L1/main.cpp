#include <iostream>

const int duim = 12;
int main()
{
    std::cout << "enter please duims: ";
    int d;
    std::cin >> d;
    int futs = d / 12;
    int d2 = d % 12;
    std::cout << "U Height is " << futs << " futs and " << d2 << " duims.\n";
    return 0;
}
