#include <iostream>
int main()
{
    double balance_Dafni = 100;
    double balance_Kleo = 100;
    int year = 1;
    while (balance_Dafni >= balance_Kleo)
    {
        std::cout << "For " << year << " year Balance Kleo is ";
        double balanc_Kleo_year = balance_Kleo * 0.05;
        balance_Kleo += balanc_Kleo_year;
        std::cout << balance_Kleo << std::endl;

        std::cout << "For " << year << " year Balance Dafni is ";
        balance_Dafni += 10;
        std::cout << balance_Dafni << std::endl;
        year++;
    }
    
    std::cout << year << std::endl;
    return 0;
}
