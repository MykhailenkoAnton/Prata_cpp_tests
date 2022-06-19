#ifndef STACK_H_
#define STACK_H_
const int MAX = 10;
template<typename Type>

class Stack
{
private:
    
    Type items[MAX];
    int top;
public:
    Stack();
    bool is_empty();
    bool is_full();
    bool push(const Type & it);
    bool pop(Type & it);
};

template<typename Type>
Stack<Type>::Stack()
{
    top = 0;
}

template<typename Type>
bool Stack<Type>::is_full()
{
    return top == MAX;
}

template<typename Type>
bool Stack<Type>::is_empty()
{
    return top == 0;
}

template<typename Type>
bool Stack<Type>::push(const Type & it)
{
    if (top < MAX)
    {
        items[top++] = it;
        return true;
    }
    else
    {
        return false;
    }
}

template<typename Type>
bool Stack<Type>::pop(Type & it)
{
    if (top > 0)
    {
        it = items[--top];
        return true;
    }
    else
    {
        return false;
    }
}

#endif
