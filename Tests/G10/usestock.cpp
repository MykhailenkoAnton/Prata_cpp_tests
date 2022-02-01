#include <iostream>
#include "strock00.h"
int main()
{
    // Stock fluffy_the_cat;
    // fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    // fluffy_the_cat.show();
    // fluffy_the_cat.buy(15, 18.125);
    // fluffy_the_cat.show();
    // fluffy_the_cat.sell(400, 20.00);
    // fluffy_the_cat.show();
    // fluffy_the_cat.buy(300000, 40.125);
    // fluffy_the_cat.show();
    // fluffy_the_cat.sell(300000, 0.125);
    // fluffy_the_cat.show();

    // + конструктор и дестркутор

    std::cout << "Using constructors to create new objects\n";
    Stock stock1("NanoSmart", 12, 20.0); // первый синтаксис
    stock1.show();
    Stock stock2 = Stock("Bobo object", 2, 2.0); // второй синтаксис
    stock2.show();
    
    // Присваивание stockl объекту stock2
    std::cout << "Assigning stockl to stock2:\n";
    stock2 = stock1;

    // Вывод stockl и stock2
    std::cout << "Listing stockl and stock2:\n";
    stock1.show();
    stock2.show();

    // Использование конструктора для сброса объекта
    std::cout << "Using a constructor to reset an object\n";
    stock1 = Stock("Nighty Foods", 10, 50.0);
    std::cout << "Revised stockl:\n";
    stock1.show();
    std::cout << "Done!\n";
    return 0;
}