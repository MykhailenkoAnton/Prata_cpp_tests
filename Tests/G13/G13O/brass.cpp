#include <iostream>
#include "brass.h"

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

// Методы Brass

Brass::Brass(const std::string & s, long an, double bal)
{
    fullname = s;
    actNum = an;
    balance = bal;
}
void Brass::Deposite(double amt)
{
    if (amt < 0)
    {
        std::cout << "Negative deposit not allowed; "
                    << "deposit is cancelled.\n"; // отрицательный вклад не допускается
    }
    else
    {
        balance += amt;
    }
}
void Brass::Withdraw(double amt)
{
    // Установка формата ###.##
    format ini = setFormat();
    precis prec = std::cout.precision(2);
    if (amt < 0)
    {
        std::cout << "Withdrawal amount must be positive; "
                    << "withdrawal canceled.\n"; // снимаемая сумма должна быть положительной
    }
    else if (amt <= balance)
    {
        balance -= amt;
    }
    else
    {
        std::cout << "Withdrawal amount of $" << amt
                << " exceeds your balance.\n"
                << "Withdrawal canceled.\n"; // снимаемая сумма превышает текущий баланс
    }
    restore(ini, prec);
}
double Brass::Balance() const
{
    return balance;
}
void Brass::ViewAcct() const
{
    // Установка формата ###.##
    format ini = setFormat();
    precis prec = std::cout.precision(2);
    std::cout << "Client: " << fullname << std::endl;
    std::cout << "Account Number: " << actNum << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
    restore(ini, prec);
}
// Методы BrassPlus

BrassPlus::BrassPlus(const std::string & s, long an, double bal, double m1, double r) : Brass(s, an, bal)
{
    maxLoan = m1;
    owesBank = 0.0;
    rate = r;
}
BrassPlus::BrassPlus(const Brass & ba, double m1, double r) : Brass(ba)
{
    maxLoan = m1;
    owesBank = 0.0;
    rate = r;
}
// Переопределение реализации метода ViewAcct
void BrassPlus::ViewAcct() const
{
    // Установка формата ###.##
    format ini = setFormat();
    precis prec = std::cout.precision(2);
    Brass::ViewAcct();
    std::cout << "Maximum loan: $" << maxLoan << std::endl; // максимальный заем
    std::cout << "Owed to bank: $" << owesBank <<std:: endl; // долг банку
    std::cout.precision(3); // формат ###.###
    std::cout << "Loan Rate: " << 100 * rate << "%\n"; // процент на заем
    restore(ini, prec);
}
// Переопределение реализации метода Withdraw()
void BrassPlus::Withdraw(double amt)
{
    // Установка формата ###.##
    format ini = setFormat();
    precis prec = std::cout.precision(2);
    double bal = Balance();
    if (amt <= bal)
    {
        Brass::Withdraw(amt);
    }
    else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        std::cout << "Bank advance: $" << advance << std::endl; // аванс банка
        std::cout << "Finance charge: $" << advance * rate << std::endl; // долг банку
        Deposite(advance);
        Brass::Withdraw(amt);
    }
    else
    {
        std::cout << "Credit limit exceeded. Transaction cancelled.\n"; //предел кредита превышен
    }
    restore(ini, prec);
}
format setFormat()
{
    // Установка формата ###.##
    return std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}
void restore(format f, precis p)
{
    std::cout.setf(f, std::ios_base::floatfield);
    std::cout.precision(p);
}