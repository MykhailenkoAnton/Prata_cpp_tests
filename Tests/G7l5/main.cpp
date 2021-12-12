#include <iostream>
long long fact(int num);
int main()
{
    std::cout << "Enter pleae a number to fact: ";
    int number;
    std::cin >> number;
    std::cout << fact(number);  
    return 0;
}
long long fact(int num)
{
    if (num == 0)
     return 1;
    return num * fact(num - 1);
}

// example recursive

// long long fact(int num)
// {
//     int i = 0;
//     long long fact[num];
//     fact[1] = fact[0] = 1ll;
//     for (i = 2; i <= num; i++)
//     {
//         fact[i] = i * fact[i-1];
//     }
//     return fact[i - 1];
// }