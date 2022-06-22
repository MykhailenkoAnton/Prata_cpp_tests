#include <iostream>
#include "wine.h"

void Wine::GetBottles()
{
    for (int i = 0; i < years; i++)
    {
        std::cout << "Enter years wine: ";
        std::cin >> PairArr::first()[i];
        std::cout << "Enrer amount bot: ";
        std::cin >> PairArr::second()[i];
    }
    
}

std::string & Wine::Label()
{
    return (std::string &) *this;
}

int Wine::Sum()
{
    return PairArr::second().sum();
}

void Wine::Show() const
{
    std::cout << "Wine name: " << (const std::string &) (*this) << std::endl;
    std::cout << '\t' << "Years " << '\t' << "Bot " << std::endl;
    for (int i = 0; i < years; i++)
    {
        std::cout << '\t' << PairArr::first()[i] << '\t' << PairArr::second()[i] << std::endl;
    }
}
