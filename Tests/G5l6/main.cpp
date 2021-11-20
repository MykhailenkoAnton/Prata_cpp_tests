#include <iostream>
const int twelwe = 12;
const int three = 3;
int main()
{
    const char * mounts[twelwe] = 
    {
        "Junvary",
        "Febrary",
        "Martch",
        "April",
        "May",
        "June",
        "Jule",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int total = 0;
    int sales[three][twelwe] {};
    
    for (int i = 0; i < three; i++)
    {
        std::cout << "Sales for Year " << i + 1 << std::endl;
        for (int j = 0; j < twelwe; j++)
        {
            std::cout << mounts[j] << ": ";
            std::cin >> sales[i][j];
            total += sales[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << "total for three year = " << total << std::endl;
    return 0;
}