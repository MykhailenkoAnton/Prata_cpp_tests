#ifndef STACK_H_
#define STACK_H_
typedef unsigned long Item;
class Stack
{
private:
    enum {MAX = 10}; // константа, специфичная для класса
    Item items[MAX]; // хранит элементы стека
    int top;           // индекс вершины стека
public:
    Stack(); 
    bool is_empty() const;
    bool is_full() const;

    // push () возвращает false, если стек полон, и true - в противном случае
    bool push(const Item & item); // добавляет элемент в стек

    // pop () возвращает false, если стек пуст, и true - в противном случае
    bool pop(Item & item); // выталкивает элемент с вершины стека
};

#endif