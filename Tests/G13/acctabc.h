#ifndef ACCTABC_H_
#define ACCTABC_H_
#include <string>
#include <iostream>
class AcctABC
{
private:
    std::string fullname;
    long actNum;
    double balance;
protected:
    struct Formatting
    {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const std::string & FullName() const {return fullname;}
    long AcctNum() const {return actNum;}
    Formatting SetFormat() const;
    void Restore(Formatting & f) const;
public:
    AcctABC(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
    void Deposit(double amt);
    double Balance() const {return balance;}
    virtual void Withdraw(double amt) = 0;
    virtual void ViewAcct() const = 0;
    virtual ~AcctABC() {}
};
// Класс счета Brass Account
class Brass : public AcctABC
{
public:
    Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(s, an, bal) {}
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    virtual ~Brass() {}
};
// Класс счета Brass Plus
class BrassPlus : public AcctABC
{
private:
    double MaxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string & s = "Nullbody", long an = -1, double bal = 0.0, double m1 = 500,
    double r = 0.10);
    BrassPlus(const Brass & ba, double m1 = 500, double r = 0.10);
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    void ResetMax(double m) {MaxLoan = m;}
    void ReserRare(double r) {rate = r;}
    void ResetOwes() {owesBank = 0;}
};


#endif