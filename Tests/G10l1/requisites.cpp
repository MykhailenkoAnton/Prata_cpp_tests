#include <iostream>
#include "requisites.h"
requisites::requisites(const std::string & nm, const std::string & an, double b)
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
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}
void requisites::add_money_on_balance(double m)
{
    std::cout << "U balance added " << m << " dollars\n";
    balance += m;
}
void requisites::withdrawal(double m)
{
    std::cout << "U balance - " << m << " dollars\n";
    balance -= m;
}
requisites::requisites()
{
    name = "!!!";
    account_number = "000";
    balance = 10000.0;
}