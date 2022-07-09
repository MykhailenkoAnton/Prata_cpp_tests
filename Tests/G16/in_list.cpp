#include <iostream>
#include <initializer_list>

double sum(std::initializer_list<double> il);
double avarage(const std::initializer_list<double> & ril);

int main()
{
    std::cout << "List 1: sum = " << sum({2, 3, 4})
            << ", ave = "  << avarage({2, 3, 4}) << "\n"; // список 1, его сумма и среднее

    std::initializer_list<double> d1 = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "List 2: sum = " << sum(d1)
            << ", ave = "  << avarage(d1) << "\n"; // список 2, его сумма и среднее

    
    d1 = {16.0, 25.0, 36.0, 40.0, 64.0};
    std::cout << "List 3: sum = " << sum(d1)
            << ", ave = "  << avarage(d1) << "\n"; // список 3, его сумма и среднее
    return 0;
}


double sum(std::initializer_list<double> il)
{
    double tot = 0;
    for (auto pIt = il.begin(); pIt != il.end(); pIt++)
    {
        tot += *pIt;
    }
    return tot;
}

double avarage(const std::initializer_list<double> & ril)
{
    double tot = 0;
    int n = ril.size();
    double ave = 0.0;
    if (n > 0)
    {
        for (auto pIt = ril.begin(); pIt != ril.end(); pIt++)
        {
            tot += *pIt;
        }
        ave = tot / n;
    }
    return ave;
}