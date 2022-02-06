#ifndef GOLF10_H_
#define GOLF10_H_
#include <string>

class golf
{
private:
    char name[50];
    int handicap;
public:
    golf();
    golf(const char * str, int x);
    int setgolf();
    void showgolf();
};


#endif