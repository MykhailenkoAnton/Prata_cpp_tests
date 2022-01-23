#include <iostream>
extern int tom;
static int dick = 10;
int harry = 200;

void remote_acsecc()
{
    std::cout << "remote_access () reports the following addresses:\n";
    std::cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry\n";
}