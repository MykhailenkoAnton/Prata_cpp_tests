#include <iostream>
void hours(int a, int b);
int main()
{
    int h, m;
    std::cout << "Enter hours: ";
    std::cin >> h;
    std::cout << "Enter minuts: ";
    std::cin >> m;
    hours(h, m);
    return 0;
}
void hours (int a, int b)
{
    std::cout << "Time: " << a << ":" << b << std::endl;
}

