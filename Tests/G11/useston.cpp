#include <iostream>
#include "stonewt.h"
void Display(const Stonewt & ST, int n);
int main()
{
    Stonewt incognito = 275;
    Stonewt wolf(285.7);
    Stonewt taft(21, 8);
    std::cout << "The celebrity weighed ";
    incognito.Show_str();
    std::cout << "The detective weighed ";
    wolf.Show_str();
    std::cout << "The President weighed ";
    taft.Show_lbs();
    incognito = 276.8;
    taft = 325;
    std::cout << "After dinner, the celebrity weighed ";
    incognito.Show_str();
    std::cout << "After dinner, the President weighed ";
    taft.Show_lbs();
    Display(taft, 2);
    std::cout << "The wrestler weighed even more.Xn";
    Display(422, 2);
    std::cout << "No stone left unearned\n";
    return 0;
}
void Display(const Stonewt & ST, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Wow! ";
        ST.Show_str();
    }
    
}