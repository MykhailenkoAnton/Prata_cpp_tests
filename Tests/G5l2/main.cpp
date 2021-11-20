#include <iostream>
#include <string>
#include <cstring>
#include <array>
const int arr = 101;
int main()
{
    std::array <long double,arr> fact;
    fact[1] = fact[0] = 1.0l;
    for (int i = 2; i < arr; i++)
    {
        fact[i] = i * fact[i - 1];
    }
    for (int i = 0; i < arr; i++)
    {
        std::cout << i << "! = " << fact[i] << std::endl;
    }
    return 0;
}