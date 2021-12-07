#include <iostream>
#include <cmath>
#include <string>
#include <array>
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



// int sum_arr(const int * begin, const int * end);
// const int ArSize = 8;
// int main()
// {
//     int coockies[ArSize] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int sum = sum_arr(coockies, coockies + ArSize);
//     std::cout << "Total coockies eating = " << sum << std::endl;
//     sum = sum_arr(coockies, coockies + 3);
//     std::cout << "first 3 = " << sum << std::endl;
//     sum = sum_arr(coockies + 4, coockies + 8);
//     std::cout << "Last 4 = " << sum << std::endl;
//     return 0;
// }
// int sum_arr(const int * begin, const int * end)
// {
//     const int * pt;
//     int total = 0;
//     for (pt = begin; pt != end; pt++)
//     {
//         total += *pt;
//     }
//     return total;
// }


// unsigned int c_in_str(const char * str, char ch);
// int main ()
// {
//     char name[15] = "minimum";
//     const char *wail = "ulumate";

//     unsigned int mc = c_in_str(name, 'm');
//     unsigned int us = c_in_str(wail, 'u');

//     std::cout << "M char = " << mc << std::endl;
//     std::cout << "U char = " << us << std::endl;

//     return 0;
// }
// unsigned int c_in_str(const char * str, char ch)
// {
//     unsigned int count = 0;
//     while (*str)
//     {
//         if (*str == ch)
//         count++;
//         str++;  // перемещение указателя на следующий символ
//     }
//     return count;
// }

// char * buildstr(char ch, int n);
// int main()
// {
//     std::cout << "Enter ch: ";
//     char ch;
//     std::cin >> ch;
//     std::cout << "Enter nm: ";
//     int nm;
//     std::cin >> nm;

//     char * ps = buildstr(ch, nm); 
//     std::cout << ps << std::endl;
//     delete [] ps;
    
//     ps = buildstr('+', 20);
//     std::cout << ps << "-----DONE-----" << ps << std::endl;
//     delete [] ps;

//     return 0;
// }
// Строит строку из n символов сh
// char * buildstr(char ch, int n)
// {
//     char * pstr = new char[n + 1];
//     pstr[n] = '\0';                    
//     while (n-- > 0)
//     {
//         pstr[n] = ch;
//     }
//     return pstr;
    // or
    // char * pstr = new char[n + 1];
    // pstr[n] = '\0';
    // int i = 0;
    // while (i < n)
    // {
    //     pstr[i++] = ch;
    // }
    // return pstr;
// }


// const int min_per_h = 60;
// struct travel_time
// {
//     int hours;
//     int mins;
// };
// travel_time sum(travel_time t1, travel_time t2);
// void show_time(travel_time t);
// int main ()
// {
//     travel_time day_1 = {5, 45};
//     travel_time day_2 = {4, 55};
//     travel_time trip  = sum(day_1, day_2);
//     std::cout << "Two days travel: ";
//     show_time(trip);

//     travel_time day_3 = {3, 45};
//     std::cout << "Three days: ";
//     show_time(sum(trip, day_3));

//     return 0;
// }
// travel_time sum(travel_time t1, travel_time t2)
// {
//     travel_time total;
//     total.mins = (t1.mins + t2.mins) % min_per_h;
//     total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / min_per_h;
//     return total;
// }
// void show_time(travel_time t)
// {
//     std::cout << t.hours << " hours, ";
//     std::cout << t.mins << " mins.\n";
// }





// struct rect
// {
//     double x; // расстояние по горизонтали от исходной точки
//     double y; // расстояние по вертикали от исходной точки
// };
// struct polar
// {
//     double distance;  // расстояние от исходной точки
//     double angle;   // направление от исходной точки
// };
// void show_polar(polar dapos);
// polar rect_to_polar(rect pdx);
// int main()
// {
//     rect rplace;
//     polar pplace;
//     std::cout << "Enter the x and у values: ";
//     while (std::cin >> rplace.x >> rplace.y)
//     {
//         pplace = rect_to_polar(rplace);
//         show_polar(pplace);
//         std::cout << "Next two numbers (q to quit) : "; // Ввод следующих двух чисел (q для завершения)
//     }
//     std::cout << "Done!\n";
//     return 0;
// }
// void show_polar(polar dapos)
// {
//     const double Rad_to_deg = 57.29577951;

//     std::cout << "distance = " << dapos.distance;
//     std::cout << ", angle = " << dapos.angle * Rad_to_deg;
//     std::cout << " degrees!\n";
// }
// polar rect_to_polar(rect pdx)
// {
//     polar pda;

//     pda.distance = sqrt(pdx.x * pdx.x + pdx.y * pdx.y);
//     pda.angle = atan2(pdx.y, pdx.x);

//     return pda; // возврат структуры polar
// }




// передача адрессов структур
// struct rect
// {
//     double x; // расстояние по горизонтали от исходной точки
//     double y; // расстояние по вертикали от исходной точки
// };
// struct polar
// {
//     double distance;  // расстояние от исходной точки
//     double angle;   // направление от исходной точки
// };
// void show_polar(const polar * pda);
// polar rect_to_polar(const rect * pdx, polar * pda);
// int main()
// {
//     rect rplace;
//     polar pplace;
//     std::cout << "Enter the x and у values: ";
//     while (std::cin >> rplace.x >> rplace.y)
//     {
//         rect_to_polar(&rplace, &pplace);// передача адресов
//         show_polar(&pplace);// передача адресов
//         std::cout << "Next two numbers (q to quit) : "; // Ввод следующих двух чисел (q для завершения)
//     }
//     std::cout << "Done!\n";
//     return 0;
// }
// // Отображение полярных координат с преобразованием радиан в градусы
// void show_polar(const polar * pda)
// {
//     const double Rad_to_deg = 57.29577951;

//     std::cout << "distance = " << pda->distance;
//     std::cout << ", angle = " << pda->angle * Rad_to_deg;
//     std::cout << " degrees!\n";
// }
// // Преобразование прямоугольных координат в полярные
// polar rect_to_polar(const rect * pdx, polar * pda)
// {

//     pda->distance = sqrt(pdx->x * pdx->x + pdx->y * pdx->y);
//     pda->angle = atan2(pdx->y, pdx->x);

// }



// const int SIZE = 5;
// void display(const std::string str[], int n);
// int main()
// {
//     std::string name[SIZE];
//     std::cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
//     for (int i = 0; i < SIZE; i++)
//     {
//         std::cout << i + 1 << ": ";
//         getline(std::cin, name[i]);

//     }
//     display(name, SIZE);
//     return 0;
// }
// void display(const std::string str[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << i + 1 << ": " << str[i] << std::endl;
//     }
// }

// const int Seasons = 4;
// // Функция, использующая объект array, но не изменяющая его
// void show(std::array <double, 4> da);
// // Функция для изменения объекта array
// void fill(std::array <double, 4> * pa);

// const std::array<std::string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};
// int main()
// {
//     std::array<double, Seasons> expenssions;
//     fill(&expenssions);
//     show(expenssions);
//     return 0;
// }

// void fill(std::array <double, 4> * pa)
// {
//     for (int i = 0; i < Seasons; i++)
//     {
//         std::cout << "Enter " << Snames[i] << " expenses: ";
//         std::cin >> (*pa)[i];
//     }
// }

// void show(std::array <double, 4> da)
// {
//     double total = 0.0;
//     std::cout << "expenses\n";
//     for(int i = 0; i < Seasons; i++)
//     {
//         std::cout << Snames[i] << ": " << da[i] << std::endl;
//         total += da[i];
//     }
//     std::cout << "Total: " << total << std::endl;
// }


// rekursiya

// void countdown(int n);
// int main()
// {
//     countdown(5);
//     return 0;
// }
// void countdown(int n)
// {
//     std::cout << "Counting down... " << n << std::endl;
//     if(n > 0)
//     {
//         n--;
//         countdown(n);
//     }
        // std::cout << n << " - now it's UP" << std::endl;
// }

// rekursiya

// const int Len = 66;
// const int Divs = 6;
// void subdivide (char ar[], int low, int hight, int level);

// int main()
// {
//     char ruler[Len];
//     int i;
//     for (i = 1; i < Len -2; i++)
//     {
//         ruler[i] = ' ';
//     }
//     ruler[Len - 1] = 0;
//     int max = Len - 2;
//     int min = 0;
//     ruler[min] = ruler[max] = '|';
//     std::cout << ruler << std::endl;
//     for (i = 1; i <= Divs; i++)
//     {
//         subdivide(ruler, min, max, i);
//         std::cout << ruler << std::endl;
//         for(int j = 1; j < Len - 2; j++)
//         {
//             ruler[j] = ' ';
//         }
//     }
//     return 0;
// }
// void subdivide (char ar[], int low, int hight, int level)
// {
//     if (level == 0)
//     return;
//     int mid = (hight + low) / 2;
//     ar[mid] = '|';
//     subdivide(ar, low, mid, level - 1);
//     subdivide (ar, mid, hight, level - 1);
// }

// double betsy(int );
// double pam(int);
// void estimate(int lines, double (*pf)(int));

// int main()
// {
//     std::cout << "How meny strings u have?";
//     int str;
//     std::cin >> str;

//     std::cout << "betsy has: ";
//     estimate(str, pam);
//     std::cout << "pam has: ";
//     estimate(str, betsy);

//     return 0;
// }
// double betsy(int a)
// {
//     return 0.05 * a;
// }
// double pam(int b)
// {
//     return 0.2 * b * 0.49;
// }
// void estimate(int lines, double (*pf)(int))
// {
//     std::cout << lines << " has " << (*pf)(lines) << "hours\n";
// }


// const double * f1 (const double * ar);
// const double * f2 (const double * ar);
// const double * f3 (const double * ar);

// int main()
// {
//     double av[3] = {1233.3, 4242.2, 6565.3};
//     const double * (*p1) (const double *) = f1;
//     auto p2 = f2;
//     // Использование указателей на функции
//     std::cout << "Using pointers to functions:\n";
//     std::cout << " Address Value\n";
//     std::cout << (*p1)(av) << ": " << *(*p1)(av) << std::endl;
//     std::cout << p2(av) << ": " << *p2(av) << std::endl;

//     const double * (*pa[3]) (const double *) = {f1, f2, f3};
//     // Использование массивов указателей на функции
//     auto pb = pa;
//     std::cout << "\nUsing an array of pointers to functions:\n";
//     std::cout << " Address Value\n";
//     // Использование массивов указателей на функции
//     for (int i = 0; i < 3; i++)
//     {
//         std::cout << pa[i](av) << ": " << *pa[i](av) << std::endl;
//     }
//     // Использование указателя на указатель на функцию
//     std::cout << "\nUsing a pointer to a pointer to a function: \n";
//     std::cout << " Address Value\n";
//     for (int i = 0; i < 3; i++)
//     {
//         std::cout << pb[i](av) << ": "  << *pb[i](av) << std::endl;
//     }

//     // Указатель на массив указателей на функции
//     std::cout << "\nUsing pointers to an array of pointers:\n";
//     std::cout << " Address Value\n"; // вывод значения адреса
//     // Простой способ объявления рс
//     auto pc = &pa;
//     std::cout << (*pc)[0](av) << ": " << *(*pc)[0](av) << std::endl;

//     // Сложный способ объявления pd
//     const double *(*(*pd)[3]) (const double *) = &pa;
//     const double * pdb = (*pd)[1](av);
//     std::cout << pdb << ": " << *pdb << std::endl;

//     // Альтернативная нотация
//     std::cout << (*(*pd)[2])(av) << ": " << *(*(*pd)[2])(av) << std::endl;

//     return 0;
// }
// const double * f1 (const double * ar)
// {
//     return ar;
// }
// const double * f2 (const double * ar)
// {
//     return ar+1;
// }
// const double * f3 (const double * ar)
// {
//     return ar+2;
// }