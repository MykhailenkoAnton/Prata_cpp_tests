#include <iostream>
#include "namesp.h"

void other();
void another();

int main()
{
    using debts::Debt;
    using debts::showDebt;

    Debt golf = {{"Benny", "Coansriff"}, 120.0};
    showDebt(golf);
    other();
    another();
    return 0;
}
void other()
{
    using namespace debts;
    Person pg = {"Hollio", "Cesar"};
    showPerson(pg);
    std::cout << std::endl;
    Debt zippy[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        getDebt(zippy[i]);
    }
    for (i = 0; i < 3; i++)
    {
        showDebt(zippy[i]);
    }
    std::cout << "Total debt: &" << sumDebts(zippy, 3) << std::endl;
}
void another()
{
    using pers::Person;
    Person collector = {"Milo", "Yobovich"};
    pers::showPerson(collector);
    std::cout << std::endl;
}