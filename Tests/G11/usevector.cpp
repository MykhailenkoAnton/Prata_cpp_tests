#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main()
{
    srand(time(0)); // начальное значение для генератора случайных чисел
    double direction;
    VECTOR::Vector step;
    VECTOR::Vector rezult(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    std::cout << "Enter target distance (q to quit) : ";
    // Ввод заданного расстояния (q для завершения)
    while (std::cin >> target)
    {
        std::cout << "Enter step length: "; // ввод длины шага
        if (!(std::cin >> dstep))
        {
            break;
        }
        while (rezult.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, VECTOR::Vector::POL);
            rezult = rezult + step;
            steps++;
        }
        std::cout << "After " << steps << " steps, the subject "
                    "has the following location:\n";
        std::cout << rezult << std::endl; // вывод позиции после steps шагов
        rezult.polar_mode();
        std::cout << " or\n" << rezult << std::endl;
        std::cout << "Average outward distance per step = "
                << rezult.magval()/ steps << std::endl; // вывод среднего расстояния на один шаг
        steps = 0;
        rezult.reset(0.0, 0.0);
        std::cout << "Enter target distance (q to quit) : ";
        // Ввод заданного расстояния (q для завершения)
    }
    std::cout << "Bye!\n";
    std::cin.clear();
    while (std::cin.get() != '\n')
    {
        continue;
    }
    
    return 0;
}