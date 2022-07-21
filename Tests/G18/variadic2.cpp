#include <iostream>
#include <string>
// Определение для 0 параметров — завершение вызова
void show_list3() {}
// Определение для 1 параметра
template <typename T>
void show_list3(const T& value)
{
    std::cout << value << std::endl;
}

// Определение для 2 и более параметров
template<typename T, typename ... Args>
void show_list3(const T& value, const Args& ... args)
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
    show_list3(x * x, '!', 7, str);
    return 0;
}