#include <iostream>
#include <cstring>
int main()
{
    char word[100];
    int total = 0;
    std::cin >> word;
    while (strcmp(word, "done"))
    {
        total++;
        std::cin >> word;

    }
    std::cout << total;
    return 0;
}