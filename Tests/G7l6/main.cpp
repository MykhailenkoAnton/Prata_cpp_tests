#include <iostream>
const int Max = 7;
int fill_array(double ar [], int n);
void show_array(double * ar, int n);
void reserve_array(double ar [], int n);
int main()
{
    double numbers[Max];
    int right_value = fill_array(numbers, Max);
    show_array(numbers, right_value);

    std::cout << "Reverse array numbers:\n";
    reserve_array(numbers, right_value);
    show_array(numbers, right_value);
    
    return 0;
}
int fill_array(double ar [], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        std::cout << "Enter please " << i + 1 << " numbers: ";
        if (!(std::cin >> ar[i]))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
            {
                continue;
            }
            // std::cout << "bad input\n";
            break;
        }
    }
    return i;
}
void show_array(double * ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "You entered " << ar[i] << std::endl;
    }
    
}
void reserve_array(double ar [], int n)
{
    int x;
    int i;
    int j;

    for(i = 1, j = n - 2; i < j; --j, i++)
    {
        x = ar[i];
        ar[i] = ar[j];
        ar[j] = x;
    }
}