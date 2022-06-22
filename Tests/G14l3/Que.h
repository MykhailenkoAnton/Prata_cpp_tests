#ifndef QUE_H_
#define QUE_H_
template<typename Type>
class QueueTP
{
private:
    struct Node
    {
        Type worker; struct Node * next;
    };
    enum {Q_SIZE = 10};
    Node * front; // указатель на начало Queue
    Node * rear; // указатель на конец Queue
    int items;
    const int qsize;

    // Упреждающие объявления для предотвращения открытого копирования
    QueueTP(const QueueTP & q) : qsize(0) {}
    QueueTP & operator=(const QueueTP & q) {return *this;}
public:
    QueueTP(int qs = Q_SIZE);
    ~QueueTP();
    bool is_empty() const;
    bool is_full() const;
    int quecount() const;
    bool enqueue(const Type & t);
    bool dequeue(Type & t);
};

template<typename Type>
QueueTP<Type>::QueueTP(int qs) : qsize(qs)
{
    front = rear = nullptr;
    items = 0;
}

template<typename Type>
QueueTP<Type>::~QueueTP()
{
    Node * temp;
    while (front != nullptr)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template<typename Type>
bool QueueTP<Type>::is_empty() const
{
    return items == 0;
}

template<typename Type>
bool QueueTP<Type>::is_full() const
{
    return items == qsize;
}

template<typename Type>
int QueueTP<Type>::quecount() const
{
    return items;
}

// Добавление элемента в очередь
template<typename Type>
bool QueueTP<Type>::enqueue(const Type & t)
{
    if (is_full())
    {
        return false;
    }
    Node * add = new Node; // создание узла

    add->worker = t; // занесение указателей на узлы
    add->next = nullptr;
    items++;
    if (front == nullptr)
    {
        front = add;
    }
    else
    {
        rear->next = add;
    }
    rear = add; // указатель конца указывает на новый узел
    return true;
}

// Помещение элемента front в переменную item и его удаление из очереди

template<typename Type>
bool QueueTP<Type>::dequeue(Type & t)
{
    if (front == nullptr)
    {
        return false;
    }
    t = front->worker;
    items--;
    Node * temp = front; // сохранение местоположения первого элемента
    front = front->next; // сдвиг указателя начала на следующий элемент
    delete temp; // удаление предыдущего первого элемента
    if (items == 0)
    {
        rear = nullptr;
    }
    return true;
}
#endif