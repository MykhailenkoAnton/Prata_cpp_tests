#ifndef STACK1_H_
#define STACK1_H_
template<typename Type>

class Stack
{
private:
    enum {SIZE = 10};
    int stacksize;
    Type * it;
    int top;
public:
    explicit Stack(int ss = SIZE);
    Stack(const Stack & st);
    ~Stack() {delete [] it;};

    bool is_empty() { return top == 0;};
    bool is_full() {return top == stacksize;};
    bool push(const Type & it);
    bool pop(Type & it);

    Stack & operator=(const Stack & st);
};
template<typename Type>
Stack<Type>::Stack(int ss) : stacksize(ss), top(0)
{
    it = new Type[stacksize];
}

template<typename Type>
Stack<Type>::Stack(const Stack & st)
{
    stacksize = st.stacksize;
    top = st.top;
    it = new Type[stacksize];
    for (int i = 0; i < top; i++)
    {
        it[i] = st.it[i];
    }
}

template<typename Type>
bool Stack<Type>::push(const Type & its)
{
    if (top < stacksize)
    {
        it[top++] = its;
        return true;
    }
    else
    {
        return false;
    }
}

template<typename Type>
bool Stack<Type>::pop(Type & its)
{
    if (top > 0)
    {
        its = it[--top];
        return true;
    }
    else
    {
        return false;
    }
}

template<typename Type>
Stack<Type> & Stack<Type>::operator=(const Stack & st)
{
    if (this == &st)
    {
        return *this;
    }
    delete [] it;
    stacksize = st.stacksize;
    top = st.top;
    it = new Type[stacksize];
    for (int i = 0; i < top; i++)
    {
        it[i] = st.it[i];
    }
    return *this;
}

#endif
