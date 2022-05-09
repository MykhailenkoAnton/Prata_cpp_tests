#include <iostream>
#include "tabten.h"

int main()
{
    // TableTennisPlayer player1("Chuck", "Blizzard", true);
    // TableTennisPlayer player2("Tara", "Boomdea", false);
    // player1.Name();
    // if (player1.HasTable())
    // {
    //     std::cout << ": has a table.\n";
    // }
    // else
    // {
    //     std::cout << ": hasn't a table.\n";
    // }
    // player2.Name();
    // if (player2.HasTable())
    // {
    //     std::cout << ": has a table.\n";
    // }
    // else
    // {
    //     std::cout << ": hasn't a table.\n";
    // }

    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    rplayer1.Name(); // объект производного класса использует метод базового класса
    if (rplayer1.HasTable())
    {
        std::cout << " : has a table. \n";
    }
    else
    {
        std::cout << " : hasn't a table. \n";
    }
    player1.Name();// объект базового класса использует метод базового класса
    if (player1.HasTable())
    {
        std::cout << " : has a table. \n";
    }
    else
    {
        std::cout << " : hasn't a table. \n";
    }
    std::cout << "Name: ";
    rplayer1.Name();
    std::cout << "; Rating: " << rplayer1.Rating() << std::endl;

    // Инициализация объекта RatedPlayer с помощью объекта TableTennisPlayer
    RatedPlayer rplayer2(1212, player1);
    std::cout << "Name: ";
    rplayer2.Name();
    std::cout << "; Rating: " << rplayer2.Rating() << std::endl;
    return 0;
}