#include <iostream>
const int Max = 5;
int fill_array(double * begin, double * end);
void show_array(const double * begin, const double * end);
void revalue(double r, double * begin, double * end);
int main()
{
    double properties[Max];
    int size = fill_array(properties, properties + Max);
    show_array(properties,properties + size);
    std::cout << "Enter please factor: ";
    double factor;
    if (size > 0)
    {
        std::cout << "Enter factor: ";
        while (!(std::cin >> factor))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
            {
                continue;
            }
            std::cout << "bad input, try again: ";
        }
        revalue(factor, properties, properties + size);
        show_array(properties, properties + size);
    }
    std::cout << "Done!\n";
    return 0;
}
int fill_array(double * begin, double * end)
{
    int i = 0;
    double * pt;
    double temp;
    for (pt = begin; pt != end; pt++)
    {
        std::cout << "Enter pleae " << i + 1 << " value: ";
        std::cin >> temp;
        if(!std::cin)
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
            {
                continue;
            }
            std::cout << "bad input\n";
            break;
        }
        else if (temp < 0)
        {
            break;
        }
        else
        {
            i++;
        }
        *pt = temp;
    }
    return i;
}
void show_array(const double * begin, const double * end)
{
    const double * p;
    for (p = begin; p != end; p++)
    {
        std::cout << *p << std::endl;
    }
}
void revalue(double r, double * begin, double * end)
{
    double * p;
    for (p = begin; p < end; p++)
    {
        *p *= r;
    }
}