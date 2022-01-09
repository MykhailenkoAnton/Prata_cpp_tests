#include <iostream>
// void iquote(int n);
// void iquote(double x);
// void iquote(std::string str);
// int main()
// {
//     iquote();
//     iquote();
//     iquote();
//     return 0;
// }
// void iquote(int n)
// {
//     std::cout << "\"" << n << "\"" << std::endl;
// }
// void iquote(double x)
// {
//     std::cout << '"' << x << '"' << std::endl;
// }
// void iquote(std::string str)
// {
//     std::cout << "\"" << str << "\"" << std::endl;
// }

// struct box
// {
//     char maker [40];
//     float height;
//     float width;
//     float length;
//     float volume;
// } BX = 
// {
//     "Hello, word!",
//     4.5,
//     7.4,
//     12.5,
//     9.8
// };
// void show(box & b);
// void reshow(box & bo);
// int main()
// {

//     show(BX);
//     reshow(BX);
//     return 0;
// }
// void show(box & b)
// {
//     std::cout << b.maker << std::endl;
//     std::cout << b.height << std::endl;
//     std::cout << b.width << std::endl;
//     std::cout << b.length<< std::endl;
//     std::cout << b.volume << std::endl;
// }
// void reshow(box & bo)
// {
//     bo.volume = bo.height * bo.width * bo.length;
//     std::cout << bo.maker << std::endl;
//     std::cout << bo.height << std::endl;
//     std::cout << bo.width << std::endl;
//     std::cout << bo.length<< std::endl;
//     std::cout << bo.volume << std::endl;
// }

// #include <iostream>
// #include <array>
// #include <string>
// // Константные данные
// const int Seasons = 4;
// const std::array<std::string, Seasons> Snames =
// {"Spring", "Summer", "Fall", "Winter"};
// // Функция для изменения объекта array
// void fill(std::array<double, Seasons> & pa) ;
// // Функция, использующая объект array, но не изменяющая его
// void show(std::array<double, Seasons> & da);
// int main ()
// {
// std::array<double, Seasons> expenses;
// fill(expenses);
// show(expenses);
// return 0;
// }
// void fill(std::array<double, Seasons> & pa)
// {
// using namespace std;
// for (int i = 0; i < Seasons; i++)
// { 
//     cout << "Enter " << Snames [i] << " expenses: "; // ввод расходов по временам года
//     cin >> pa[i];
// }
// }
// void show(std::array<double, Seasons> & da)
// {
// using namespace std;
// double total = 0.0;
// cout << "\nEXPENSES\n"; // вывод расходов по временам года
// for (int i = 0; i < Seasons; i++)
// {
//     cout << Snames [i] << ": $" << da[i] << endl;
//     total += da[i];
// }
// cout << "Total Expenses: $" << total << endl; // вывод общей суммы расходов

// template<typename T>
// T max(T t1, T t2);
// int main()
// {
//     std::cout << max(4, 10);
//     return 0;
// }
// template<typename T>
// T max(T t1, T t2)
// {
//     return t1 > t2 ? t1 : t2;
// }

// template <> box max(box t1, box t2);
// int main()
// {
//     return 0;
// }
// template <> box max(box t1, box t2)
// {
//     return t1.volume > t2.volume ? t1 : t2;
// }

