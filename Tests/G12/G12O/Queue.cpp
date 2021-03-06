#include <iostream>
#include "Queue.h"

Queue::Queue(int qs) : qsize(qs)
{
    front = rear = nullptr;
    items = 0;
}
Queue::~Queue()
{
    Node * temp;
    while (front != nullptr) // пока очередь не пуста
    {
        temp = front; // сохранение адреса начального'элемента
        front = front->next; // переустановка указателя на следующий элемент
        delete temp; // удаление предыдущего начального элемента
    }
}
// Метод класса Customer
// При появлении клиента фиксируется момент его прибытия, а время
// обслуживания выбирается случайным образом из диапазона 1-3
void Customer::set(long when)
{
    processtime = rand() % 3 + 1;
    arrive = when;
}
bool Queue::isEmpty() const
{
    return items == 0;
}
bool Queue::isFull() const
{
    return items == qsize;
}
int Queue::queuecount() const
{
    return items;
}
// Добавление элемента в очередь
bool Queue::enqueue(const Customer & item)
{
    if (isFull())
    {
        return false;
    }
    Node * add = new Node; // создание узла
    // При неудачном выполнении операция new генерирует исключение std::bad_alloc
    add->item = item; // занесение указателей на узлы
    add->next = nullptr; 
    items++;
    if (front == NULL) // если очередь пуста,
    {
        front = add;// элемент помещается в начало
    }
    else
    {
        rear->next = add; // иначе он помещается в конец
    }
    rear = add; // указатель конца указывает на новый узел
    return true;
}
// Помещение элемента front в переменную item и его удаление из очереди
bool Queue::dequeue(Customer & item)
{
    if (front == nullptr)
    {
        return false;
    }
    item = front->item; // в item заносится первый элемент из очереди
    items--;
    Node * temp = front; // сохранение местоположения первого элемента
    front = front->next; // сдвиг указателя начала на следующий элемент
    delete temp; // удаление предыдущего первого элемента
    if (items == 0)
    {
        rear == nullptr;
    }
    return true;
}