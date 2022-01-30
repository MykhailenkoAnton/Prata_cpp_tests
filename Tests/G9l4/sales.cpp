#include "namesp.h"
#include <iostream>
    // Копирует меньшее значение из 4 или n элементов из массива
    // аг в член sales структуры s, вычисляет и сохраняет
    // среднее арифметическое, максимальное и минимальное
    // значения введенных чисел;
    // оставшиеся элементы sales, если таковые есть, устанавливаются в 0
void SALES::setSales(SALES::Sales & s, const double ar[], int n)
{
    double x = 0.0;
    for (int i = 0; i < n; i++)
    {
        x += ar[i];
    }
    double a = x / n;
    s.avarage = a;
    // int max = 0;
    s.max = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.max < ar[i])
        {
            s.max = ar[i];
        }
    }
    // s.max = max;
    s.min = ar[0];
    for (int i = 0; i < SALES::QUATERS; i++)
    {
        if (s.min > ar[i])
        {
            s.min = ar[i];
        }
    }
    s.sales[0] = s.min;
    for (int i = 1; i < SALES::QUATERS; i++)
    {
        s.sales[i] = 0;
    }
    
}
// Интерактивно подсчитывает продажи за 4 квартала,
    // сохраняет их в члене sales структуры s, вычисляет и
    // сохраняет среднее арифметическое, а также максимальное
    // и минимальное значения введенных чисел
void SALES::setSales(SALES::Sales & s)
{
    for (int i = 0; i < SALES::QUATERS; i++)
    {
        std::cout << "Enter please " << i + 1 << " meaning sales: ";
        std::cin >> s.sales[i];
    }

    double x = 0.0;
    for (int i = 0; i < QUATERS; i++)
    {
        x += s.sales[i];
    }
    double a = x / QUATERS;
    s.avarage = a;

    s.max = s.sales[0];
    for (int i = 0; i < QUATERS; i++)
    {
        if (s.max < s.sales[i])
        {
            s.max = s.sales[i];
        }
    }
    s.min = s.sales[0];
    for (int i = 0; i < SALES::QUATERS; i++)
    {
        if (s.min > s.sales[i])
        {
            s.min = s.sales[i];
        }
    }
}
void SALES::showSales(SALES::Sales & s)
{
    std::cout << "avarage = " << s.avarage << std::endl;
    std::cout << "min = " << s.min << std::endl;
    std::cout << "max = " << s.max << std::endl;
    for (int i = 0; i < SALES::QUATERS; i++)
    {
        std::cout << "sales= " << s.sales[i] << std::endl;
    }
}

