#include <iostream>
#include <ctime>
#include "head.h"

//Person
Person::~Person()
{
}

void Person::Data() const
{
    std::cout << "Firts name: " << f_name << std::endl;
    std::cout << "Last name: " << l_name << std::endl;
}

void Person::Get()
{
    std::cout << "Enter first name: ";
    getline(std::cin, f_name);
    std::cout << "Enter last name: ";
    getline(std::cin, l_name);
}

//Gunslinger
double Gunslinger::Draw() const
{
    return time_for_ready;
}

void Gunslinger::Data() const
{
    std::cout << "Time to ready: " << Draw() << std::endl;
    std::cout << "Amount panches: " << amount_nothes << std::endl;
}

void Gunslinger::Get()
{
    std::cout << "Enter how time to ready: ";
    std::cin >> time_for_ready;
    std::cout << "How amount panches has?: ";
    std:: cin >> amount_nothes;
    while (std::cin.get() != '\n')
    {
        continue;
    }
}

void Gunslinger::Set()
{
    std::cout << "Name for gunslinger:\n";
    Person::Get();
    Get();
}

void Gunslinger::Show() const
{
    std::cout << "Gunslinger:\n";
    Person::Data();
    Data();
}

//PokerPlayer

int PokerPlayer::Draw() 
{
    srand(time(0));
    int r = 1 + rand() % 52;
    return r;
}

void PokerPlayer::Show() const
{
    std::cout << "PokerPlayer:\n";
    Person::Data();
    Data();
}

void PokerPlayer::Set()
{
    std::cout << "Name for PokerPlayer:\n";
    Person::Get();
}
void PokerPlayer::Get()
{
    random_card = Draw();
}

void PokerPlayer::Data() const
{
    std::cout << "Card is " << random_card << std::endl;
}

//BadDude

void BadDude::Data() const
{
    Gunslinger::Data();
    PokerPlayer::Data();
    std::cout << "next card: " << card_next << std::endl;
    std::cout << "time for weapon " << time_for_wepon << std::endl;
}

void BadDude::Get()
{
    Gunslinger::Get();
    PokerPlayer::Get();
    card_next = PokerPlayer::Draw();
    time_for_wepon = Gunslinger::Draw() / 2;
}

void BadDude::Set()
{
    std::cout << "Name for BadDude:\n";
    Person::Get();
    Get();
}

void BadDude::Show() const
{
    std::cout << "BadDude:\n";
    Person::Data();
    Data();
}

double BadDude::GDraw()
{
    return time_for_wepon;
}

int BadDude::CDraw()
{
    return card_next;
}