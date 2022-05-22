#ifndef STACK_H_
#define STACK_H_
template <class MyType>
class Stack
{
private:
    enum {MAX = 10}; // константа, специфичная для класса
    MyType items[MAX]; // хранит элементы стека
    int top;           // индекс вершины стека
public:
    Stack(); 
    bool is_empty();
    bool is_full();

    // push () возвращает false, если стек полон, и true - в противном случае
    bool push(const MyType & item); // добавляет элемент в стек

    // pop () возвращает false, если стек пуст, и true - в противном случае
    bool pop(MyType & item); // выталкивает элемент с вершины стека
};
template <class MyType>
Stack<MyType>::Stack()
{
    top = 0;
}
template <class MyType>
bool Stack<MyType>::is_empty()
{
    return top == 0;
}
template <class MyType>
bool Stack<MyType>::is_full()
{
    return top == MAX;
}
template <class MyType>
bool Stack<MyType>::push(const MyType & item)
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
template <class MyType>
bool Stack<MyType>::pop(MyType & item)
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
#endif