#include <iostream>
#include "requisites.h"
requisites::requisites(const std::string & nm, const std::string & an, double b = 0.0)
{
    name = nm;
    account_number = an;
    balance = b;
}
void requisites::Show() const
{
    std::cout << "Name client = " << name << std::endl;
    std::cout << "Account number = " << account_number << std::endl;
    std::cout << "Balance = " << balance << std::endl;
}
void requisites::add_money_on_balance(double m)
{
    balance += m;
}
void requisites::withdrawal(double m)
{
    balance -= m;
}