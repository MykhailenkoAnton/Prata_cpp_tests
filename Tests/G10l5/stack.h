#ifndef STACK_H_
#define STACK_H_
#include <string>
struct customer
{
    // char fullname[35];
    std::string name;
    double paymant;
};
typedef customer customer;
class stack
{
private:
    enum {MAX = 10};
    customer cust[MAX];
    int top;
public:
    stack();
    bool isEmty() const;
    bool isFull() const;

    // добавляет элемент в стек
    bool push(const customer & COSTUMER); // возращает false если стек полон and true если стек пуст

    // выталкивает элемент с вершины стека
    bool pop(customer & COSTUMER); // возращает false если стек пустой and true если нет

};


#endif