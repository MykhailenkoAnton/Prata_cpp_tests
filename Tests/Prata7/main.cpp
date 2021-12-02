#include <iostream>
// int fill_array(double ar[], int limit);
// void show_array(const double ar[], int n);
// void revalue_factor(double r, double ar[], int n);
// const int Max = 5;
// int main()
// {
//     double prepoties[Max];
//     int size = fill_array(prepoties, Max);
//     show_array(prepoties, size);
//     if (size > 0)
//     {
//         std::cout << "Enter revalue: ";
//         double factor;
//         while(!(std::cin >> factor))   // неправильный ввод
//         {
//             std::cin.clear();                 
//             while (std::cin.get() != '\n') 
//             {
//                 continue;
//             }
//             std::cout << "bad input, enter value once more: ";
//         }
//         revalue_factor(factor, prepoties, size);
//         show_array(prepoties, size);
//     }
    
//     return 0;
// }
//  // возвращает количество заполненных массивов
// int fill_array(double ar[], int limit)
// {
//     double temp;
//     int i;
//     for (i = 0; i < limit; i++)
//     {
//         std::cout << "Enter a value: " << i + 1 << ": ";
//         std::cin >> temp;
//         if (!std::cin)
//         {
//             std::cin.clear();
//             while (std::cin.get() != '\n')
//             {
//                 continue;
//             }
//             std::cout << "bad input, bad process tetminated!\n";
            
//         }
//         else if (temp < 0)
//         {
//             break;
//         }
//         ar[i] = temp;
        
//     }
//     return i;
// }
// // вывод на экран
// void show_array(const double ar[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << "Propetly #" << i + 1 << ": $";
//         std::cout << ar[i] << std::endl;
//     }
// }
// // умножает на r каждый елемент ar
// void revalue_factor(double r, double ar[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         ar[i] *= r;
//     }
// }
int sum_arr(const int * begin, const int * end);
const int ArSize = 8;
int main()
{
    int coockies[ArSize] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sum = sum_arr(coockies, coockies + ArSize);
    std::cout << "Total coockies eating = " << sum << std::endl;
    sum = sum_arr(coockies, coockies + 3);
    std::cout << "first 3 = " << sum << std::endl;
    sum = sum_arr(coockies + 4, coockies + 8);
    std::cout << "Last 4 = " << sum << std::endl;
    return 0;
}
int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;
    for (pt = begin; pt != end; pt++)
    {
        total += *pt;
    }
    return total;
}