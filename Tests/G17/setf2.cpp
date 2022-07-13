#include <iostream>
#include <cmath>

int main()
{
    // Использовать выравнивание влево, показать знак плюс,
    // показать завершающие нули с точностью, равной 3
    std::cout.setf(std::ios_base::left, std::ios_base::adjustfield);
    std::cout.setf(std::ios_base::showpos);
    std::cout.setf(std::ios_base::showpoint);
    std::cout.precision(3);

    // Использовать экспоненциальную запись и сохранить старые установки формата
    std::ios_base::fmtflags old = std::cout.setf(std::ios_base::scientific, std::ios_base::floatfield);
    std::cout << "Left Justification:\n";
    long n;
    for (n = 1; n <= 41; n+= 10)
    {
        std::cout.width(4);
        std::cout << n << '|';
        std::cout.width(12);
        std::cout << sqrt(double(n)) << "|\n";
    }
    // Переключиться на внутреннее выравнивание
    std::cout.setf(std::ios_base::internal, std::ios_base::adjustfield);
    // Восстановить стиль отображения значений с плавающей точкой, заданный по умолчанию
    std::cout.setf(old, std::ios_base::floatfield);
    for (n = 1; n <= 41; n+= 10)
    {
        std::cout.width(4);
        std::cout << n << '|';
        std::cout.width(12);
        std::cout << sqrt(double(n)) << "|\n";
    }

    // Использовать выравнивание по правому краю и форму записи с фиксированной точкой
    std::cout.setf(std::ios_base::right, std::ios_base::adjustfield);
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::cout << "Right Justification:\n";
    for (n = 1; n <= 41; n+= 10)
    {
        std::cout.width(4);
        std::cout << n << '|';
        std::cout.width(12);
        std::cout << sqrt(double(n)) << "|\n";
    }

    return 0;
}