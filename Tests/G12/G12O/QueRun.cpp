#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Queue.h"
const int MIN_PER_HOUR = 60;

bool newcustomer(double x); // появился ли новый клиент?

int main()
{
    srand(time(0)); // случайная инициализация rand()
    std::cout << "Case Study: Bank of Heather Automatic Teller\n";
    std::cout << "Enter maximum size of queue: "; // ввод максимального размера очереди
    int qs;
    std::cin >> qs;
    Queue line(qs); // очередь может содержать до qs людей
    std::cout << "Enter the number of simulation hours: "; // ввод количества эмулируемых часов
    int hours;
    std::cin >> hours;

    // Эмуляция будет запускать один цикл в минуту
    long cyclelimit = MIN_PER_HOUR * hours; // количество циклов
    std::cout << "Enter the average number of customers per hour: ";
    // Ввод количества клиентов в час
    double perhour; // среднее количество появлений за час
    std::cin >> perhour;
    double min_per_cast; // среднее время между появлениями
    min_per_cast = MIN_PER_HOUR / perhour;
    Customer temp; // данные нового клиента
    long turnaways = 0; // не допущены в полную очередь
    long customers = 0; // присоединены к очереди
    long served = 0; // обслужены во время эмуляции
    long sum_lime = 0; // общая длина очереди
    int wait_time = 0; // время до освобождения банкомата
    long line_wait = 0; // общее время в очереди

    // Запуск моделирования
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cast))
        {
            if (line.isFull())
            {
                turnaways++;
            }
            else
            {
                customers++;
                temp.set(cycle); // cycle = время прибытия
                line.enqueue(temp); // добавление новичка в очередь
            }
        }
        if (wait_time <= 0 && !line.isEmpty())
        {
            line.dequeue(temp); // обслуживание следующего клиента
            wait_time = temp.ptime(); // в течение wait_time минут
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
        {
            wait_time--;
        }
        sum_lime += line.queuecount();
    }
    // Вывод результатов
    if (customers > 0)
    {
        std::cout << "customers accepted: " << customers << std::endl; // принято клиентов
        std::cout << " customers served: " << served << std::endl; // обслужено клиентов
        std::cout << " turnaways: " << std::endl; // не принято клиентов
        std::cout << "average queue size: "; // средний размер очереди
        std::cout.precision(2);
        std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
        std::cout << (double) sum_lime / cyclelimit << std::endl;
        std::cout << " average wait time: " // среднее время ожидания (минут)
                    << (double) line_wait / served << std::endl;
    }
    else
    {
        std::cout << "No customers! \n"; // клиентов нет
    }
    std::cout << "Done!\n";
    return 0;
}

// x = среднее время в минутах между клиентами
// возвращается значение true, если в эту минуту появляется клиент
bool newcustomer(double x)
{
    return rand() * x / RAND_MAX < 1;
}