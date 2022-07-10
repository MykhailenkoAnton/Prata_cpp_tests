#include <iostream>
#include <cstdlib>
#include <ctime>
#include <queue>
#include "head.h"
const int MIN_PER_HR = 60;

bool newcostumer(double x); // появился ли новый клиент?

int main()
{
    using std::ios_base;
    srand(time(0));
    std::cout << "Case Study: Bank of Heather Automatic Teller\n";
    std::cout << "Enter maximum size of queue: "; // ввод максимального размера очереди
    int qs;
    std::cin >> qs;
    std::queue<Item> line;// очередь может содержать до qs людей
    std::cout << "Enter the number of simulation hours: "; // ввод количества эмулируемых часов
    int hours;
    std::cin >> hours; // часы эмуляции
    // Эмуляция будет запускать один цикл в минуту
    long cyclelimit = MIN_PER_HR * hours; // количество циклов
    std::cout << "Enter the average number of customers per hour: ";
                        // Ввод количества клиентов в час
    double perhour; // среднее количество появлений за час
    std::cin >> perhour;
    double min_per_cast = MIN_PER_HR / perhour; // среднее время между появлениями
    Item temp; // данные нового клиента
    long turnaway = 0; // не допущены в полную очередь
    long customers = 0; // присоединены к очереди
    long served = 0; // обслужены во время эмуляции
    long sum_line = 0; // общая длина очереди
    int wait_time = 0; // время до освобождения банкомата
    long line_wait = 0; // общее время в очереди

    // Запуск моделирования
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcostumer(min_per_cast)) // есть подошедший клиент
        {
            if (!line.empty())
            {
                turnaway++;
            }
            else
            {
                customers++;
                temp.set(cycle); // cycle = время прибытия
                line.push(temp); // добавление новичка в очередь
            }
        }
        if(wait_time <= 0 && !line.empty())
        {
            line.front(); // обслуживание следующего клиента
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
        {
            wait_time--;
        }
        sum_line += line.size();
    }
    // Вывод результатов
    if (customers > 0)
    {
        std::cout << "customers accepted: " << customers << std::endl; // принято клиентов
        std::cout << " customers served: " << served << std::endl; // обслужено клиентов
        std::cout << " turnaways: " << turnaway << std::endl; // не принято клиентов
        std::cout << "average queue size: "; // средний размер очереди
        std::cout.precision(2);
        std::cout.setf(ios_base::fixed, ios_base::floatfield);
        std::cout << (double) sum_line / cyclelimit << std::endl;
        std::cout << " average wait time: " // среднее время ожидания (минут)
                    << (double) line_wait / served << " minutes" << std::endl;
    }
    else
    {
        std::cout << "No customers\n";
    }
    std::cout << "Done!\n";
    return 0;
}
// x = среднее время в минутах между клиентами
// возвращается значение true, если в эту минуту появляется клиент
bool newcostumer(double x)
{
    return (rand() * x / RAND_MAX < 1); 
}