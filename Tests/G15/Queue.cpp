#include <iostream>
#include <string>
#include "Queue.h"
int main()
{
    QueueTP<std::string> cs(5);
    std::string temp;

    while (!cs.is_full())
    {
        std::cout << "Please enter your name. You will be "
                    "served in the order of arrival.\n"
                    "name: "; // ввод имени и фамилии
        getline(std::cin, temp);
        cs.enqueue(temp);
    }
    std::cout << "The queue is full. Processing begins!\n";
                    // Очередь полна; начало обслуживания
    while (!cs.is_empty())
    {
        cs.dequeue(temp);
        std::cout << "Now processing " << temp << " ...\n" ;
    }
    return 0;
}