#include <iostream>
int far(int);
int main()
{
    std::cout << "Enter farlong: ";
    int farlong;
    std::cin >> farlong;
    int yards = far(farlong);
    std::cout << farlong << " = " << yards << " yards!\n";
    return 0;
}
int far(int x)
{
    return 220 * x;
}