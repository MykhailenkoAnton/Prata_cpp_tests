#include <iostream>

struct debts
{
    char name[50];
    double amount;
};
template <typename T>
T SumArray(T ar[], int n);

template <typename T>
T SumArray(T * ar[], int n);

void show(const debts * ar, int n);
int main()
{
    int things[6] = {13, 32, 25, 60, 30, 12};
    debts mr_E[3] = 
    {
        {"Vasiliy", 2500.0},
        {"Rockvile", 4700.0},
        {"Nums", 8450.5}
    };
    double * pd[3];
    for (int i = 0; i < 3; i++)
    {
        pd[i] = &mr_E[i].amount;
    }
    
    std::cout << "Listing Mr. E's counts of things :\n";
    std::cout << SumArray(things, 6) << std::endl;
    std::cout << "Listing Mr. E's debts:\n";
    
    show(mr_E, 3);
   
    std::cout << SumArray(pd, 3) << std::endl;
    return 0;
}
template <typename T>
T SumArray(T ar[], int n)
{
    T deb = 0;
    for (int i = 0; i < n; i++)
    {
        deb += ar[i];
    }
    return deb;
}
template <typename T>
T SumArray(T * ar[], int n)
{
    T  a;
    a = 0;
    for (int i = 0; i < n; i++)
    {
        a += *ar[i];
    }
    return a;
}
void show(const debts * ar, int n)
{
   for (int i = 0; i < n; i++)
   {
       std::cout << ar[i].name << std::endl;
   }
}