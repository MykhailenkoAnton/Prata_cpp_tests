#include <iostream>
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