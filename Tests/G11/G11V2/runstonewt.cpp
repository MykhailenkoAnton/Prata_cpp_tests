#include <iostream>
#include "stonetw.h"
void display(const Stonetw & st, int n);
int main()
{
    Stonetw incognito = 275; // использование конструктора для инициализации
    Stonetw wolfe(285.7); // то же, что и Stonewt wolfe = 285.7;
    Stonetw taft(21, 8);
    std::cout << "The celebrity weighed ";
    incognito.Show_stn();
    std::cout << "The detective weighed ";
    wolfe.Show_stn();
    std::cout << "The President weighed ";
    taft.Show_lbs();
    incognito = 276.8; // использование конструктора для преобразования
    taft = 325; // то же, что и taft = Stonewt (325)
    std::cout << "After dinner, the celebrity weighed ";
    incognito.Show_stn();
    std::cout << "After dinner, the President weighed ";
    taft.Show_lbs();
    display(taft, 2);
    std::cout << "The wrestler weighed even more.\n";
    display(422, 2);
    std::cout << "No stone left unearned\n" ;
    return 0;
}
void display(const Stonetw & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Wow! ";
        st.Show_stn();
    }
}