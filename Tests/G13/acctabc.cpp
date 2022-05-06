#include <iostream>
#include "acctabc.h"

// Абстрактный базовый класс
AcctABC::AcctABC(const std::string & s, long an, double bal)
{
    fullname = s;
    actNum = an;
    balance = bal;
}
void AcctABC::Deposit(double amt)
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
AcctABC::Formatting AcctABC::SetFormat() const
{
    // Установка формата ###.##
    Formatting f;
    f.flag = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    f.pr = std::cout.precision(2);
    return f;
}
void AcctABC::Restore(Formatting & f) const
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
void Brass::ViewAcct() const
{
    Formatting f = SetFormat();
    std::cout << "Brass Client: " << FullName() << std::endl; // клиент Brass
    std::cout << "Account Number: " << AcctNum() << std::endl; // номер счета
    std::cout << "Balance: " << Balance() << std::endl; // баланс
    Restore(f);
}
// Методы BrassPlus
BrassPlus::BrassPlus(const std::string & s, long an, double bal, double m1, double r) : AcctABC(s, an, bal)
{
    MaxLoan = m1;
    owesBank = 0.0;
    rate = r;
}
void BrassPlus::ViewAcct() const
{
    Formatting f = SetFormat();
    std::cout << "Brass Client: " << FullName() << std::endl; // клиент Brass
    std::cout << "Account Number: " << AcctNum() << std::endl; // номер счета
    std::cout << "Balance: " << Balance() << std::endl; // баланс
    std::cout << "Maximum loan: $" << MaxLoan << std::endl; // максимальный заем
    std::cout << "Owed to bank: $" << owesBank << std::endl; // долг банку
    std::cout.precision(3);
    std::cout << "Loan Rate: " << 100 * rate << "%\n"; // процент на заем
    Restore(f);
}
void BrassPlus::Withdraw(double amt)
{
    Formatting f = SetFormat();
    double bal = Balance();
    if (amt <= bal)
    {
        AcctABC::Withdraw(amt);
    }
    else if (amt <= bal + MaxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += amt * (1.0 + rate);
        std::cout << "Bank advance: $" << advance << std::endl; // аванс банка
        std::cout << "Finance charge: $" << advance * rate << std::endl; // долг банку
        Deposit(advance);
        AcctABC::Withdraw(amt);
    }
    else
    {
        std::cout << "Credit limit exceeded. Transaction cancelled.\n"; //предел кредита превышен
    }
    Restore(f);
}