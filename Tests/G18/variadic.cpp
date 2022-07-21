#include <iostream>
#include <string>
// Определение для 0 параметров — завершение вызова
void show_list3() {}
// Определение для 1 и более параметров
template<typename T, typename ... Args>
void show_list3(T value, Args ... args)
{
    std::cout << value << ", ";
    show_list3(args...);
}
int main()
{
    int n = 14;
    double x = 2.4951;
    std::string str = "Mr. String objects!";
    show_list3(n, x);
    std::cout << std::endl;
    show_list3(x * x, '!', 7, str);
    std::cout << std::endl;
    return 0;
}