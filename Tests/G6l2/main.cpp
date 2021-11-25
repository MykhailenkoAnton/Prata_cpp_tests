#include <iostream>
const int ten = 10;
int main()
{
    double donat[ten];
    
    

    int i = 0;
    std::cout << "donat #1: ";
    
    
    while (i < ten && std::cin >> donat[i])
    {
        if (++i < ten)
        {
            std::cout << "donat #" << i + 1 << ": ";
        }
    }
    double total = 0.0;
    for (int j = 0; j < i; j++)
    {
        total += donat[j];
    }
    std::cout << "total sum is = " << total << std::endl;
    double avarage = total / i;
    std::cout << "avarage is " << avarage << std::endl;

    int count_avarage = 0;
    for (int k = 0; k < i; k++)
    {
        if (avarage < donat[k])
        {
            count_avarage++;
        }
        
    }
    std::cout << "More thar avrage its = " << count_avarage << std::endl;
    
}