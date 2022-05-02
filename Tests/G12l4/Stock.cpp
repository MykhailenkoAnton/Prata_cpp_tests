#include "Stock.h"
#include <iostream>
// Stack::Stack() // создание пустого стека
// {
//     top = 0;
// }
// bool Stack::is_empty() const
// {
//     return top == 0;
// }
// bool Stack::is_full() const
// {
//     return top == MAX;
// }
// bool Stack::push(const Item & item)
// {
//     if (top < MAX)
//     {
//         items[top++] = item;
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// bool Stack::pop(Item & item)
// {
//     if (top > 0)
//     {
//         item = items[--top];
//         return true; 
//     }
//     else
//     {
//         return false;
//     }
// }

Stack::Stack(int n)
{
    size = n;
    items = new UNS_LONG[size];
    top = 0;
}
Stack::~Stack()
{
    std::cout << "DELETED !";
    delete [] items;
}
bool Stack::is_empty() const
{
    return top == 0;
}
bool Stack::is_full() const
{
    return top == MAX;
}
bool Stack::push(const UNS_LONG & item)
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
bool Stack::pop(UNS_LONG & item)
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
Stack::Stack(const Stack & st)
{
    std::cout << "stack copy contruktor\n"; // стек уже полон
    items = new UNS_LONG[st.size];
    for (int i = 0; i < st.size; i++)
    {
        items[i] = st.items[i];
    }
    
    top = st.top;
    size = st.size;
}
Stack & Stack::operator=(const Stack & st)
{
    std::cout << "stack operator=\n"; // стек уже полон
    if (this == &st)
    {
        return *this;
    }
    delete [] items;
    items = new UNS_LONG[st.size];
    for (int i = 0; i < st.size; i++)
    {
        items[i] = st.items[i];
    }
    top = st.top;
    size = st.size;
    return *this;
    
}
