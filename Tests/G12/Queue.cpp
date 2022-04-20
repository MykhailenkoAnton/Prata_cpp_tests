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