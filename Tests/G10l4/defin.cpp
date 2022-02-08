#include <iostream>
#include "namclass.h"

void SALES::sal::showsal()
{
    std::cout << "avarage = " << avarege << std::endl;
    std::cout << "min = " << min << std::endl;
    std::cout << "max = " << max << std::endl;
    for (int i = 0; i < SALES::sal::QUATERS; i++)
    {
        std::cout << "sales = " << sales[i] << std::endl;
    }
    
}
SALES::sal::sal()
{
    for (int i = 0; i < QUATERS; i++)
    {
        std::cout << "Enter, please " << i + 1 << " num: ";
        std::cin >> sales[i];
    }
    double avarage = 0.0;
    for (int i = 0; i < QUATERS; i++)
    {
        avarege += sales[i];
    }
    avarege = avarege / QUATERS;
    max = sales[0];
    for (int i = 1; i < QUATERS; i++)
    {
        if (max < sales[i])
        {
            max = sales[i];
        }
    }
    min = sales[0];
    for (int i = 1; i < QUATERS; i++)
    {
        if (min > sales[i])
        {
            min = sales[i];
        }
    }
}
SALES::sal::sal(const double ar[], int n)
{
    avarege = 0.0;
    for (int i = 0; i < QUATERS; i++)
    {
        avarege += ar[i];
    }
    avarege = avarege / QUATERS;
    max = ar[0];
    for (int i = 1; i < QUATERS; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    min = ar[0];
    for (int i = 1; i < QUATERS; i++)
    {
        if(min > ar[i])
        {
            min = ar[i];
        }
    }
    sales[0] = min;
    for (int i = 1; i < QUATERS; i++)
    {
        sales[i] = 0;
    }
}