#include <iostream>
int inG(double ar[], int n);
void show(double ar[], int n);
double avarage(double ar[], int n);
int main()
{
    double Golf[10];
    int value = inG(Golf, 10);
    show(Golf, value);
    double avareg = avarage(Golf, value);
    std::cout << "Avarage is " << avareg << std::endl;
    return 0;
}
int inG(double ar[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        std::cout << "Enter a " << i + 1 << " value: ";
        
        if (!(std::cin >> ar[i]) || ar[i] < 0)
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
            {
                continue;
            }
            std::cout << "bad input!\n";
            break;
        }    
    }
    std::cout << i << std::endl;
    return i;
}
void show(double ar[], int n)
{
    std::cout << "All rezults: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << ar[i] << " ";
    }
}
double avarage(double ar[], int n)
{
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        total += ar[i];
    }
    double avarage = total / n;
    return avarage;
}