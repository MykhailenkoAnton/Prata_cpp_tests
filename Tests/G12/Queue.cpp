#include <iostream>
#include <cstdlib>
#include "Queue.h"

// Методы класса Queue
Queue::Queue(int qs) : qsize(qs)
{
    front = rear = nullptr;
    items = 0;
}
Queue::~Queue()
{
    Node * temp;
    while (front != NULL) // пока очередь не пуста
    {
        temp = front; // сохранение адреса начального элемента
        front = front->next; // переустановка указателя на следующий элемент
        delete temp; // удаление предыдущего начального элемента
    }
    
}
bool Queue::isempty() const
{
    return items == 0;
}
bool Queue::isfull() const
{
    return items == qsize;
}
int Queue::queuecount() const 
{
    return items;
}
// Добавление элемента в очередь
bool Queue::enqueue(const Item & item)
{
    if (isfull())
    {
        return false;
    }
    Node * add = new Node; // создание узла
    // При неудачном выполнении операция new генерирует исключение std::bad_alloc
    add->item = item; // занесение указателей на узлы
    add->next = NULL;
    items++;
    if (front == NULL) // если очередь пуста,
    {
        front = add; // элемент помещается в начало
    }
    else
    {
        rear->next = add; // иначе он помещается в конец
    }
    rear = add;
    return true;
}
// Помещение элемента front в переменную item и его удаление из очереди
bool Queue::dequeue(Item & item)
{
    if (front == NULL)
    {
        return false;
    }
    item = front->item;
    items--;
    Node * temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
    {
        rear = 0;
    }
    return true;
}
// Метод класса Customer
// При появлении клиента фиксируется момент его прибытия, а время
// обслуживания выбирается случайным образом из диапазона 1-3
void Costumer::set(long when)
{
    processtime = rand() % 3 + 1;
    arrive = when;  
}