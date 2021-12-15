#include <iostream>
const int Seasons = 4;
const char * Seas[Seasons] = {"Spring", "Summer", "Fail", "Winter"};
// void fill(double * ar_1, int n);
// void show(double ar[], int n);    
// int main()
// {
//     double expenses[Seasons];
//     fill(expenses, Seasons);
//     show(expenses, Seasons);
//     return 0;
// }
// void fill(double * ar_1, int n)
// {
//     for (int i = 0; i < Seasons; i++)
//     {
//         std::cout << "Enter " << Seas[i] << " expenses: ";
//         std::cin >> ar_1[i];
//     }
    
// }
// void show(double ar[], int n)
// {
//     double total = 0.0;
//     std::cout << "\nEXPENSES\n";
//     for (int i = 0; i < Seasons; i++)
//     {
//         std::cout << Seas[i] << ": $" << ar[i] << std::endl;
//         total += ar[i];
//     }
//     std::cout << "Total expenses = " << total << std::endl;                                    //a
// }

struct years
{
    double Siz[Seasons];
};
void fill(const years * y, int n);
void show(years, int n);
int main()
{
    years SEAZ;

    return 0;
}