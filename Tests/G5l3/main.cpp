#include <iostream>
int main()
{
    int num;
    std::cin >> num;
    int count = 0;
    while (num != 0)
    {
        count += num;
        std::cout << count << std::endl;
        std::cin >> num;
    }
    std::cout << "all: " << count << std::endl;
    return 0;
}