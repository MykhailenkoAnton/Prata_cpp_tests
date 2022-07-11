#include <iostream>
#include <cstring>

int main()
{
    // const char * state1 = "Florida";
    // const char * state2 = "Kansas";
    // const char * state3 = "Euphoria";

    // int len = std::strlen(state2);

    // std::cout << "Increasing loop index:\n";

    // int i;
    // for (i = 1; i <= len; i++)
    // {
    //     std::cout.write(state2, i);
    //     std::cout << std::endl;
    // }
    // // // Конкатенация вывода
    // std::cout << "Decreasing loop index:\n";
    // for (int i = len; i > 0; --i)
    // {
    //     std::cout.write(state2, i);
    //     std::cout << std::endl;
    // }
    // // Превышение
    // std::cout << "Exceeding string length:\n";
    // std::cout.write(state2, len + 5) << std::endl;
    // std::cout << std::endl;
    std::cout << std::endl;
    long val = 560031841;
    std::cout.write((char *) &val, sizeof(long));
    std::cout << std::endl;
    return 0;
}