#include "stack.h"

Stack::Stack() // создание пустого стека
{
    top = 0;
}
bool Stack::is_empty() const
{
    return top == 0;
}
bool Stack::is_full() const
{
    return top == MAX;
}
bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
    {
        return false;
    }
}
bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true; 
    }
    else
    {
        return false;
    }
}