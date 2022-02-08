#include <iostream>
#include <cstring>
#include "stack.h"

stack::stack()
{
    top = 0;
}
bool stack::isEmty() const
{
    return top == 0;
}
bool stack::isFull() const
{
    return top == MAX;
}
bool stack::push(const customer & COSTUMER)
{
    if (top < MAX)
    {
       cust[top].name = COSTUMER.name;
       cust[top].paymant = COSTUMER.paymant;
       top++;
       return true;
    }
    else
    {
        return false;
    }
}
bool stack::pop(customer & COSTUMER)
{
    if (top > 0)
    {
        --top;
        COSTUMER.name = cust[top].name;
        COSTUMER.paymant = cust[top].paymant;
        return true;
    }
    else
    {
        return false;
    }
}
