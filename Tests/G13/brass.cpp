#include <iostream>
#include "brass.h"
using std::cout;
using std::endl;
using std::string;

// Для целей форматирования
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

// Методы Brass
Brass::Brass(const std::string & s, long an, double bal)
{
    fullName = s;
    actNum = an;
    balance = bal;
}

void Brass::Deposit(double amt)
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
    format initialState = setFormat();
    precis prec = cout.precision(1);
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
        std:cout << "Withdrawal amount of $" << amt
                << " exceeds your balance.\n"
                << "Withdrawal canceled.\n"; // снимаемая сумма превышает текущий баланс
    }
    restore(initialState, prec);
}
double Brass::Balance() const
{
    return balance;
}
void Brass::ViewAcc() const
{
    // Установка формата ###.##
    format initialState = setFormat();
    precis prec = cout.precision(1);
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << actNum << endl;
    cout << "Balance: $" << balance << endl;
    restore(initialState, prec);
}

// Методы BrassPlus
BrassPlus::BrassPlus(const std::string & s, long an, double bal, double m1, double r) : Brass(s, an, bal)
{
    maxLoan = m1;
    owesBank = 0.0;
    rate = r;
}
BrassPlus::BrassPlus(const Brass & ba, double m1, double r) : Brass(ba)
{  // используется неявный конструктор копирования
    maxLoan = m1;
    owesBank = 0.0;
    rate = r;
}
// Переопределение реализации метода ViewAcct()
void BrassPlus::ViewAcc() const
{
    // Установка формата ###.##
    format initialState = setFormat();
    precis prec = cout.precision(1);
    Brass::ViewAcc(); // отображение базовой части
    cout << "Maximum loan: $" << maxLoan << endl; // максимальный заем
    cout << "Owed to bank: $" << owesBank << endl; // долг банку
    cout.precision(3); // формат ###.###
    cout << "Loan Rate: " << 100 * rate << "%\n"; // процент на заем
    restore(initialState, prec);
}
// Переопределение реализации метода Withdraw()
void BrassPlus::Withdraw(double amt)
{
    // Установка формата ###.##
    format initialState = setFormat();
    precis prec = cout.precision(1);
    double bal = Balance();
    if (amt <= bal)
    {
        Brass::Withdraw(amt);
    }
    else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Bank advance: $" << advance << endl; // аванс банка
        cout << "Finance charge: $" << advance * rate << endl; // долг банку
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
    {
        cout << "Credit limit exceeded. Transaction cancelled.\n"; //предел кредита превышен
    }
    restore(initialState, prec);
}
format setFormat()
{
    // Установка формата ###.##
    return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}
void restore(format f, precis p)
{
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}