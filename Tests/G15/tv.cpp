#include "tv.h"
#include <iostream>

bool Tv::volup()
{
    if (volume < MaxVal)
    {
        volume++;
        return true;
    }
    else
    {
        return false;
    }
    
}

bool Tv::voldown()
{
    if (volume > MinVal)
    {
        volume--;
        return true;
    }
    else
    {
        return false;
    }
}

void Tv::chanup()
{
    if (channel < maxchannel)
    {
        channel++;
    }
    else
    {
        channel = 1;
    }
}

void Tv::chandown()
{
    if (channel > 1)
    {
        channel--;
    }
    else
    {
        channel = maxchannel;
    }
}

void Tv::setting() const
{
    std::cout << "TV is " << (state == Off ? "Off" : "On") << std::endl; // выключен или включен
    if (state == On)
    {
        std::cout << "Volume setting = " << volume << std::endl; // уровень громкости
        std::cout << "Channel setting = " << channel << std::endl; // номер канала
        std::cout << "Mode = " << (mode == Antenna ? "Antenna" : "Cable") << std::endl;// антенна или кабель
        std::cout << "Input = " << (input == TV ? "TV" : "DVD") << std::endl; // вход: TV или DVD
    }
}

