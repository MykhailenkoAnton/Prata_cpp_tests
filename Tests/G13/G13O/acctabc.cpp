#include <iostream>
#include "acctabc.h"

// Абстрактный базовый класс
AcctABC::AcctABC(const std::string & s, long an, double bal)
{
    fullname = s;
    acctNum = an;
    balance = bal;
}
void AcctABC::Deposite(double amt)
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
void AcctABC::Withdraw(double amt)
{
    balance -= amt;
}
// Защищенные методы для. форматирования
AcctABC::Formatting AcctABC::setFormat() const
{
    // Установка формата ###.##
    Formatting f;
    f.flag = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    f.pr = std::cout.precision(2);
    return f;
}
void AcctABC::Restrore(Formatting & f) const
{
    std::cout.setf(f.flag, std::ios_base::floatfield);
    std::cout.precision(f.pr);   
}

// Методы Brass
void Brass::Withdraw(double amt)
{
    if (amt < 0)
    {
        std::cout << "Withdrawal amount must be positive; "
                    << "withdrawal canceled.\n"; // снимаемая сумма должна быть ^положительной
    }
    else if (amt <= Balance())
    {
        AcctABC::Withdraw(amt);
    }
    else
    {
        std::cout << "Withdrawal amount of $" << amt
                    << " exceeds your balance.\n"
                    << "Withdrawal canceled.\n"; // снимаемая сумма превышает текущий баланс
    }
}
void Brass::Viewacct() const
{
    Formatting f = setFormat();
    std::cout << "Brass Client: " << FullName() << std::endl;
    std::cout << "Account Number: " << acctnum() << std::endl;
    std::cout << "Balance: $" << Balance() << std::endl;
    Restrore(f);
}
// Методы BrassPlus
BrassPlus::BrassPlus(const std::string & s, long an, double bal, double m1, double r) : AcctABC(s, an, bal)
{
    rate = r;
    maxLoan = m1;
    owesBank = 0.0;
}
BrassPlus::BrassPlus(const Brass & ba, double m1, double r) : AcctABC(ba)
{
    rate = r;
    maxLoan = m1;
    owesBank = 0.0;
}
void BrassPlus::Viewacct() const
{
    Formatting f = setFormat();
    std::cout << "Brass Client: " << FullName() << std::endl;
    std::cout << "Account Number: " << acctnum() << std::endl;
    std::cout << "Balance: $" << Balance() << std::endl;
    std::cout << "Maximum loan: $" << maxLoan << std::endl;
    std::cout << "Owed to bank: $" << owesBank << std::endl;
    std::cout.precision(3);
    std::cout << "Loan Rate: " << 100 * rate << "%\n";
    Restrore(f);
}
void BrassPlus::Withdraw(double amt)
{
    Formatting f = setFormat();
    double bal = Balance();
    if (amt <= bal)
    {
        AcctABC::Withdraw(amt);
    }
    else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        std::cout << "Bank advance: $" << advance << std::endl;
        std::cout << "Finance charge: $" << advance * rate << std::endl;
        Deposite(advance);
        AcctABC::Withdraw(amt);
    }
    else
    {
        std::cout << "Credit limit exceeded. Transaction cancelled.\n"; //предел кредита превышен
    }
    Restrore(f);
}