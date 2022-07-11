#include <iostream>

int main()
{
    // Вывод приглашения к вводу целого числа
    std::cout << "Enter an integer: ";

    int n;
    std::cin >> n;
    std::cout << "n    n*n\n\n";
    std::cout << n << "   " << n * n << "(demical)\n";
    // Установка шестнадцатеричного режима вывода
    std::cout << std::hex;
    std::cout << n << "   " << n * n << "(hexademical)\n";
    // Установка восьмеричного режима
    std::cout << std::oct << n << "   " << n * n << "(octal)\n";
    // Альтернативный спосіоб вызова манипулятора
    std::dec(std::cout);
    std::cout << n << "   " << n * n << "(demical)\n";
    return 0;
}