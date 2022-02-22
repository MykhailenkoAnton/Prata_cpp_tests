#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "G11L1.h"

int main()
{
    std::ofstream fout;
    fout.open("vect.txt");
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
        fout << "Target distance: " << target << ", Steps size: " << dstep << std::endl;
        while (rezult.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, VECTOR::Vector::POL);
            rezult = rezult + step;
            steps++;
            fout << rezult << std::endl;
        }
        std::cout << "After " << steps << " steps, the subject "
                    "has the following location:\n";
                    
        fout << "After " << steps << " steps, the subject "
                    "has the following location:\n";
        fout << rezult << std::endl;

        std::cout << rezult << std::endl; // вывод позиции после steps шагов
        rezult.polar_mode();
        std::cout << " or\n" << rezult << std::endl;

        fout << " or\n" << rezult << std::endl;

        std::cout << "Average outward distance per step = "
                << rezult.magval()/ steps << std::endl; // вывод среднего расстояния на один шаг

        fout << "Average outward distance per step = " << rezult.magval()/ steps << std::endl;
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
    fout.close();

    
    return 0;
}