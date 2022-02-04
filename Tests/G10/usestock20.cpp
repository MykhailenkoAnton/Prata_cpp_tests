#include <iostream>
#include "stock20.h"

const int STNK = 4;
int main()
{
    Stock stocks[STNK] = 
    {
        Stock("NANO", 12, 20.0),
        Stock("REALLY", 15, 45.0),
        Stock("THYYG", 30, 10.0),
        Stock("HEROES", 20, 17.0),
    };
    std::cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STNK; st++)
    {
        stocks[st].show();
    }
    // Установка указателя н первый элемент
    const Stock * top = &stocks[0];
    for (st = 1; st < STNK; st++)
    {
        top = &top->topval(stocks[st]);
    }
    // Теперь top указывает на самый ценный пакет акций
    std::cout << "\nMost valuable holding:\n";
    top->show();
    return 0;
}