#include <iostream>
#include <string>
#include <cstring>


int main()
{
    // std::cout << "Eter first nm: ";
    // int num1;
    // std::cin >> num1;
    // std::cout << "Eter second nm: ";
    // int num2;
    // std::cin >> num2;
    // int count = 0;
    // while (num1 <= num2)
    // {
    //     count += num1;
    //     num1++;
    // }
    // std::cout << count << std::endl;
    std::cout << "Eter first nm: ";
    int num1;
    std::cin >> num1;
    std::cout << "Eter second nm: ";
    int num2;
    std::cin >> num2;
    int count = 0;
    for (int i = num1; i <= num2; i++)
    {
        count += i;
    }
    std:: cout << count << std::endl;
    return 0;   
}

