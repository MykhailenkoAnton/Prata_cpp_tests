#include <iostream>
#include <cstring>
#include "stock.h"
//конструкторы
Stock::Stock()
{
    name = new char[1];
    name[0] = '\0';
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const char * str, long n, double pr)
{
    int len = strlen(str);
    name = new char[len + 1];
    strcpy(name, str);
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; " << name << " shares set to 0.\n";
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_tot();
}
Stock::~Stock()
{
    std::cout << "Bye, " << name << std::endl;
    delete [] name;
}
void Stock::set_tot()
{
    total_val = shares * share_val;
}
void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares sold can't be negative. "
                << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        std::cout << "You can't sell more than you have! "
                << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
    {
        return s;
    }
    else
    {
        return *this;
    }
}

// my

std::ostream & operator<<(std::ostream & os, const Stock & st)
{
    // Установка формата в #.###
    std::ios_base::fmtflags orig = os.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::streamsize prec = os.precision(3);
    
    os << "Compramy = " << st.name;
    os << " Shares = " << st.shares << std::endl;
    os << " Shares Price: $" << st.share_val;

    // Установка формата в #.##
    std::cout.precision(2);
    os << " Total Worth: $" << st.total_val << std::endl;

    os.setf(orig, std::ios_base::floatfield);
    os.precision(prec);
    return os;
}
// Stock::Stock(const Stock & st)
// {
//     int len = strlen(st.name);
//     name = new char[len + 1];
//     strcpy(name, st.name);
// }
// Stock & Stock::operator=(const Stock & st)
// {
//     if (this == &st)
//     {
//         return *this;
//     }
//     delete [] name;
//     int len = strlen(st.name);
//     name = new char[len + 1];
//     strcpy(name, st.name);
//     return *this;
// }
// Stock & Stock::operator=(const char * str)
// {
//     delete [] name;
//     int len = strlen(str);
//     name = new char[len + 1];
//     strcpy(name, str);
//     return *this;
// }