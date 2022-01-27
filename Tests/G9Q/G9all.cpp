#include <iostream>
#include <new>
// void oil(int x);
// int main()
// {
//     int texas = 31;
//     int year = 2011;
//     std::cout << "In main(), texas = " << texas << ", &texas = " << &texas << std::endl;
//     std::cout << "In main(), year = " << year << ", &year = " << &year << std::endl;
//     oil(texas);
//     std::cout << "In main(), texas = " << texas << ", &texas = " << &texas << std::endl;
//     std::cout << "In main(), year = " << year << ", &year = " << &year << std::endl;
//     return 0;
// }
// void oil(int x)
// {
//     int texas = 5;
//     std::cout << "In oil(), texas = " << texas << ", &texas = " << &texas << std::endl;
//     std::cout << "In oil(), x = " << x << ", &x = " << &x << std::endl;
//     {
//         int texas = 113;
//         std::cout << "In block, texas = " << texas << ", &texas = " << &texas << std::endl;
//         std::cout << "In block, x = " << x << ", &x = " << &x << std::endl;
//     }
//     std::cout << "Post block texas = " << texas << ", &texas = " << &texas << std::endl;
// }

// const int ArSize = 10;
// void strcount(const char * str);
// int main()
// {
//     char input[ArSize];
//     char next;
//     std::cout << "Enter a line: \n";
//     std::cin.get(input, ArSize);
//     while (std::cin)
//     {
//         std::cin.get(next);
//         while (next != '\n')
//         {
//             std::cin.get(next);
//         }
//         strcount(input);
//         std::cout << "Enter next line (empty line to quit) :\n";
//         std::cin.get(input, ArSize);
//     }
//     std::cout << "Bye\n";
//     return 0;
// }
// void strcount(const char * str)
// {
//     static int total = 0;
//     int count = 0;
//     std::cout << "\"" << str <<"\" contains ";
//     while (*str++)
//     {
//         count++;
//     }
//     total += count;
//     std::cout << count << " characters\n";
//     std::cout << total << " characters total\n";
// }

//9.10
// const int BUF = 512;
// const int N = 5;
// char buffer[BUF];
// int main()
// {
//     double *pd1, *pd2;
//     int i;
//     std::cout << "Calling new and placement new:\n";
//     pd1 = new double[N];  // использование кучи
//     pd2 = new (buffer) double[N];  // использование массива buffer
//     for (i = 0; i < N; i++)
//     {
//         pd2[i] = pd1[i] = 1000 + 20.0 * i;
//     }
//     std::cout << "Memory addresses: \n" << " heap: " << pd1 << " static: " << (void *) buffer << std::endl;//вывод адресов памяти
//     std::cout << "Memory contents:\n";                                                 // вывод содержимого памяти
//     for  (i = 0; i < N; i++)
//     {
//         std::cout << pd1[i] << " at " << &pd1 << "; ";
//         std::cout << pd2[i] << " at " << &pd2 << std::endl;
//     }
//     // Вызов обычной и операции new с размещением во второй раз
//     std::cout << "\nCalling new and placement new a second time:\n";
//     double *pd3, *pd4;
//     pd3 = new double[N];  // нахождение нового адреса
//     pd4 = new (buffer) double[N]; // перезаписывание старых данных
//     for (i = 0; i < N; i++)
//     {
//         pd4[i] = pd3[i] = 1000 + 40.0 * i;
//     }
//     std::cout << "Memory contents:\n";
//     for  (i = 0; i < N; i++)
//     {
//         std::cout << pd3[i] << " at " << &pd3 << "; ";
//         std::cout << pd4[i] << " at " << &pd4 << std::endl;
//     }
//     // Вызов обычной и операции new с размещением в третий раз
//     std::cout << "\nCalling new and placement new a third time:\n";
//     delete [] pd1;
//     pd1 = new double[N];
//     pd2 = new(buffer + N * sizeof(double)) double[N];
//     for (i = 0; i < N; i++)
//     {
//         pd2[i] = pd1[i] = 1000 + 60.0 * i;
//     }
//     std::cout << "Memory contents:\n";
//     for  (i = 0; i < N; i++)
//     {
//         std::cout << pd1[i] << " at " << &pd1 << "; ";
//         std::cout << pd2[i] << " at " << &pd2 << std::endl;
//     }
//     delete [] pd1;
//     delete [] pd3;
//     return 0;
// }

// 9.