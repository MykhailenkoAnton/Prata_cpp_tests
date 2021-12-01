#include <iostream>
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue_factor(double r, double ar[], int n);
const int Max = 5;
int main()
{
    double prepoties[Max];
    int size = fill_array(prepoties, Max);
    show_array(prepoties, size);
    if (size > 0)
    {
        std::cout << "Enter revalue: ";
        double factor;
        while(!(std::cin >> factor))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
            {
                continue;
            }
            std::cout << "bad input, enter value once more: ";
        }
        revalue_factor(factor, prepoties, size);
        show_array(prepoties, size);
    }
    
    return 0;
}
int fill_array(double ar[], int limit)
{
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        std::cout << "Enter a value: " << i + 1 << ": ";
        std::cin >> temp;
        if (!std::cin)
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
            {
                continue;
            }
            std::cout << "bad input, bad process tetminated!\n";
            
        }
        else if (temp < 0)
        {
            break;
        }
        ar[i] = temp;
        
    }
    return i;
}
void show_array(const double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Propetly #" << i + 1 << ": $";
        std::cout << ar[i] << std::endl;
    }
}
void revalue_factor(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        ar[i] *= r;
    }
}