#include <iostream>
#include "tv.h"

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

void Remote::show_remote_mode()
{
    std::cout << "Remote Mode = " << (mode == Tv::TV ? "NORM" : "INTERACT") << std::endl; // режим пульта
}


void Tv::mode_remote(Remote & r)
{
    if (mode == Tv::TV)
    {
        r.mode_remote = NORM;
    }
    else
    {
        r.mode_remote = INTERACTIVE;
    }
    
}

void Tv::setting(Remote & r) const
{
    std::cout << "TV is " << (state == Off ? "Off" : "On") << std::endl; // выключен или включен
    if (state == On)
    {
        std::cout << "Volume setting = " << volume << std::endl; // уровень громкости
        std::cout << "Channel setting = " << channel << std::endl; // номер канала
        std::cout << "Mode = " << (mode == Antenna ? "Antenna" : "Cable") << std::endl;// антенна или кабель
        std::cout << "Input = " << (input == TV ? "TV" : "DVD") << std::endl; // вход: TV или DVD
        r.show_remote_mode();
    }
}
