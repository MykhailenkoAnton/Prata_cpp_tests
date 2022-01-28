#include <iostream>
#include "namesp.h"

    void pers::getPerson(pers::Person & pr)
    {
        std::cout << "Enter first name: ";
        std::cin >> pr.fname;
        std::cout << "Enter last name: ";
        std::cin >> pr.lname;
    }
    void pers::showPerson(const pers::Person & pr)
    {
        std::cout << pr.lname << ", " << pr.fname;
    }

    void debts::getDebt(debts::Debt & db)
    {
        pers::getPerson(db.name);
        std::cout << "Enter debt: ";
        std::cin >> db.amount;
    }
    void debts::showDebt(const debts::Debt & db)
    {
        pers::showPerson(db.name);
        std::cout << ": $" << db.amount << std::endl;
    }
    double debts::sumDebts(const debts::Debt ar[], int n)
    {
        double total = 0.0;
        for (int i = 0; i < n; i++)
        {
            total += ar[i].amount;
        }
        return total;
    }
