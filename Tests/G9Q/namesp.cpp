#include <iostream>
#include "namesp.h"
namespace pers
{
    void getPerson(Person & pr)
    {
        std::cout << "Enter first name: ";
        std::cin >> pr.fname;
        std::cout << "Enter last name: ";
        std::cin >> pr.lname;
    }
    void showPerson(const Person & pr)
    {
        std::cout << pr.lname << ", " << pr.fname;
    }
}
namespace debts
{
    void getDebt(Debt & db)
    {
        getPerson(db.name);
        std::cout << "Enter debt: ";
        std::cin >> db.amount;
    }
    void showDebt(const Debt & db)
    {
        showPerson(db.name);
        std::cout << ": $" << db.amount << std::endl;
    }
    double sumDebts(const Debt ar[], int n)
    {
        double total = 0.0;
        for (int i = 0; i < n; i++)
        {
            total += ar[i].amount;
        }
        return total;
    }
}