#include <iostream>
#include <string>
#include <cstdlib>
#include <string.h>
struct CandyBar
{
    char name[40];
    double weight;
    int ccal;
};
void show(CandyBar & CB);
void reply(CandyBar & C, const char * str = "Millenium Munch", double z = 5.5, int a = 10);
int main()
{
    CandyBar candy;
    reply(candy);
    show(candy);
    return 0;
}
void show(CandyBar & CB)
{
    std::cout << "Name is " << CB.name << std::endl;
    std::cout << "Weight is " << CB.weight << std::endl;
    std::cout << "Ccal is " << CB.ccal << std::endl;
}
void reply(CandyBar & C, const char * str , double z, int a)
{
    // char name_cc[40];
    strcpy(C.name, str);
    C.weight = z;
    C.ccal = a;
}