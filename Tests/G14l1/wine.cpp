#include <iostream>
#include "wine.h"
Wine::Wine()
{
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
: wine_name(l), years(y), year_and_amount(ArrayInt(y), ArrayInt(y))
{
    for (int i = 0; i < y; i++)
    {
        year_and_amount.first()[i] = yr[i];
        year_and_amount.second()[i] = bot[i];
    }
}

Wine::Wine(const char * l, int y) : wine_name(l), years(y), year_and_amount(ArrayInt(y), ArrayInt(y))
{
}


void Wine::GetBottles()
{
    for (int i = 0; i < years; i++)
    {
        std::cout << "Enter years wine: ";
        std::cin >> year_and_amount.first()[i];
        std::cout << "Enrer amount bot: ";
        std::cin >> year_and_amount.second()[i];
    }
}

std::string & Wine::Label()
{
    return wine_name;
}

int Wine::Sum()
{
    return year_and_amount.second().sum();
}

void Wine::Show() const
{
    std::cout << "Wine name: " << wine_name << std::endl;
    std::cout << '\t' << "Years " << '\t' << "Bot " << std::endl;
    for (int i = 0; i < years; i++)
    {
        std::cout << '\t' << year_and_amount.first()[i] << '\t' << year_and_amount.second()[i] << std::endl;
    }
    
}