#ifndef STOCK_H_
#define STOCK_H_
#include <string>
#include <iostream>
class Stock
{
private:
    char * name; //
    double shares;
    double share_val;
    double total_val;
public:
    Stock();
    Stock(const char * str, long n, double pr); //
    // Stock(const Stock & st); //
    // Stock & operator=(const Stock & st); //
    // Stock & operator=(const char * str); //
    ~Stock(); //
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    void set_tot();
    const Stock & topval(const Stock & s) const;
    friend std::ostream & operator<<(std::ostream & s, const Stock & st);
};

#endif