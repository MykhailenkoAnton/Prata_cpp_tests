#ifndef REQUISITES_H_
#define REQUISITES_H_

class requisites
{
private:
    std::string name;
    std::string account_number;
    double balance;
public:
    requisites();
    requisites(const std::string & nm, const std::string & an, double b = 0.0);
    void Show() const;
    void add_money_on_balance(double m);
    void withdrawal(double m);
};



#endif