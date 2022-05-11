#ifndef ACCTABC_H_
#define ACCTABC_H_
#include <iostream>
#include <string>
// Абстрактный базовый класс
class AcctABC
{
private:
    std::string fullname;
    long acctNum;
    double balance;
protected:
    struct Formatting
    {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const std::string & FullName() const {return fullname;}
    long acctnum() const {return acctNum;}
    Formatting setFormat() const;
    void Restrore(Formatting & f) const;
public:
    AcctABC(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
    void Deposite(double amt);
    virtual void Withdraw(double amt) = 0; // чистая виртуальная функция
    double Balance() const {return balance;}    
    virtual void Viewacct() const = 0; // чистая виртуальная функция
    virtual ~ AcctABC() {}
};

// Класс счета Brass Account
class Brass : public AcctABC
{
public:
    Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(s, an, bal) {}
    virtual void Withdraw(double amt);
    virtual void Viewacct() const;
};

// Класс счета Brass Plus
class BrassPlus : public AcctABC
{
private:
    double owesBank;
    double rate;
    double maxLoan;
public:
    BrassPlus(const std::string & s = "Nullbody", long an = -1, double bal = 0.0, double m1 = 500, double r = 0.1);
    BrassPlus(const Brass & ba, double m1 = 500, double r = 0.1);
    virtual void Withdraw(double amt);
    virtual void Viewacct() const;
    void ResetMax(double m) {maxLoan = m;}
    void ResetRate(double r) {rate = r;}
    void ResetOwes() {owesBank = 0.0;}
};

#endif