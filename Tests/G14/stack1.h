#ifndef STACK1_H_
#define STACK1_H_
template <class MyType>
class Stack
{
private:
    enum {SIZE = 10}; // размер по умолчанию
    int stacksize;
    MyType * items; // хранит элементы стека
    int top; // индекс вершины стека
public:
    explicit Stack(int ss = SIZE);
    Stack(const Stack & st);
    ~Stack() {delete [] items;}
    bool is_empty() {return top == 0;}
    bool is_full() {return top == stacksize;}
    bool push(const MyType & item); // добавление item в стек
    bool pop(MyType & item); // выталкивание верхнего элемента в item
    Stack & operator=(const Stack & st);
};

template <class MyType>
Stack<MyType>::Stack(int ss) : stacksize(ss), top(0)
{
    items = new MyType[stacksize];
}

template <class MyType>
Stack<MyType>::Stack(const Stack & st)
{
    stacksize = st.stacksize;
    top = st.top;
    items = new MyType[stacksize];
    for (int i = 0; i < top; i++)
    {
        items[i] = st.items[i];
    }
}

template <class MyType>
bool Stack<MyType>::push(const MyType & item)
{
    if (top < stacksize)
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

template <class MyType>
Stack<MyType> & Stack<MyType>::operator=(const Stack & st)
{
    if (this == &st)
    {
        return *this;
    }
    delete [] items;
    stacksize = st.stacksize;
    top = st.top;
    items = new MyType[stacksize];
    for (int i = 0; i < top; i++)
    {
        items[i] = st.items[i];
    }
    return *this;
}


#endif