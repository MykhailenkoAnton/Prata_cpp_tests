#ifndef BRASS_H_
#define BRASS_H_
#include <string>
class Brass
{
private:
    std::string fullName;
    long actNum;
    double balance;
public:
    Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
};

class BrassPlus : Brass
{
private:
    
public:

};




#endif