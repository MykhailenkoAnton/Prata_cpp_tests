#include <iostream>
#include <string>
int main()
{
    std::string word;
    std::cin >> word;
    int total = 0;
    while (word != "done")
    {
        total++;
        std::cin >> word;
    }
    std::cout << std::endl;
    std::cout << total;
    return 0;
}