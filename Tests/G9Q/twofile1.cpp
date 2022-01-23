#include <iostream>
int tom = 3;
int dick = 30;
static int harry = 300;
void remote_acsecc();

int main()
{
    std::cout << "main () reports the following addresses:\n";
    std::cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry\n";
    remote_acsecc();
    return 0;
}