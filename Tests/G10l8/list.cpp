#include <string>
#include <iostream>
#include "list.h"

List::List()
{
    top = 0;
}
void List::show() const
{
    for (int i = 0; i < MAX; i++)
    {
        std::cout << IT[i] << std::endl;
    }
    
}
bool List::isEmpty() const
{
    return top == 0;
}
bool List::isFull() const
{
    return top == MAX;
}
void List::add(items & ITEMS)
{
    if (top < MAX)
    {
        IT[top++] = ITEMS;
    }
}
void List::visit(void (*pf) (items & ITEMS))
{
    for (int i = 0; i < MAX; i++)
    {
       pf(IT[i]);
    }
}

