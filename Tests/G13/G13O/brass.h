#ifndef BRASS_H_
#define BRASS_H_
#include <string>

// Класс счета Brass Account
class Brass
{
private:
    std::string fullname;
    long actNum;
    double balance;
public:
    Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
    void Deposite(double amt);
    virtual void Withdraw(double amt);
    double Balance() const;
    virtual void ViewAcct() const;
    virtual ~Brass() {}
};

// Класс счета Brass Plus
class BrassPlus : public Brass
{
private:
    double maxLoan;
    double owesBank;
    double rate;
public:
    BrassPlus(const std::string & s = "Nullbody", long an = -1, double bal = 0.0, double m1 = 500, double r = 0.11125);
    BrassPlus(const Brass & ba, double m1 = 500, double r = 0.11125);
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    void ResetMax(double m) {maxLoan = m;}
    void ResetRare(double r) {rate = r;}
    void ResetOwes() {owesBank = 0;}
};







#endif