#ifndef STOCK_H_
#define STOCK_H_
typedef unsigned long UNS_LONG;
#include <iostream>
class Stack
{
private:
    enum {MAX = 10}; // константа, специфичная для класса
    UNS_LONG * items; // хранит элементы стека
    int top;           // индекс вершины стека
    int size; // количество элементов в стеке
public:
    Stack(int n = 10); // создает стек с п элементами
    explicit Stack(const Stack & st);
    ~Stack(); 
    bool is_empty() const;
    bool is_full() const;
    // push () возвращает false, если стек полон, и true - в противном случае
    bool push(const UNS_LONG & item); // добавляет элемент в стек

    // pop () возвращает false, если стек пуст, и true - в противном случае
    bool pop(UNS_LONG & item); // выталкивает элемент с вершины стека
    Stack & operator=(const Stack & st);
    friend std::ostream & operator<<(std::ostream & os, const Stack & st);
};

#endif