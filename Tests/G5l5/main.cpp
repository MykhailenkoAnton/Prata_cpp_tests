#include <iostream>
const int twelwe = 12;
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
    int total[twelwe] {};
    int sales = 0;
    for (int i = 0; i < twelwe; i++)
    {
        std::cout << mounts[i] << ": ";
        std::cin >> total[i];
        sales += total[i];
        std::cout << std::endl;
    }
    std::cout << "For years total sales is " << sales << std::endl;
    return 0;
}