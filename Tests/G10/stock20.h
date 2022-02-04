#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>
class Stock
{
private:
    std::string company;
    double shares;
    double share_val;
    double total_val;
public:
    Stock();
    Stock(const std::string & co, long n, double pr);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    void set_tot();
    const Stock & topval(const Stock & s) const;
};

#endif