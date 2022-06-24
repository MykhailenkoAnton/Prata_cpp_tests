#ifndef QUEUE_H_
#define QUEUE_H_


template<typename Type>
class QueueTP
{
private:
    enum {Q_SIZE = 10};
    // Node - определение вложенного класса
    class Node
    {
    public:
        Type item;
        Node * next;
        Node(const Type & t) : item(t), next(nullptr) {}
    };
    Node * front; // указатель на начало очереди
    Node * rear; // указатель на конец очереди
    int el_items; // текущее количество элементов в очереди
    const int qsize; // максимальное количество элементов в очереди
    QueueTP(const QueueTP & q) : qsize(0) {}
    QueueTP & operator=(const QueueTP & q) {return *this;}
public:
    QueueTP(int qs = Q_SIZE);
    ~QueueTP();
    bool is_empty() const
    {
        return el_items == 0;
    }
    bool is_full() const
    {
        return el_items == qsize;
    }
    int queuecount() const
    {
        return el_items;
    }
    bool enqueue(const Type & it); // добавление item в конец
    bool dequeue(Type & it); // удаление item из начала
};

// Методы QueueTP
template<typename Type>
QueueTP<Type>::QueueTP(int qs) : qsize(qs)
{
    front = rear = nullptr;
    el_items = 0;
}

template<typename Type>
QueueTP<Type>::~QueueTP()
{
    Node * temp;
    while (front != nullptr) // пока очередь не пуста
    {
        temp = front; // сохранение адреса первого элемента
        front = front->next; // сдвиг указателя на следующий элемент
        delete temp; // удаление предыдущего первого
    }
}

// Добавление элемента в очередь
template<typename Type>
bool QueueTP<Type>::enqueue(const Type & it)
{
    if (is_full())
    {
        return false;
    }
    Node * add = new Node(it); // создание узла
    // В случае сбоя операция new генерирует исключение std::bad_alloc
    el_items++;
    if (front == 0)
    {
        front = add; // если очередь пуста, элемент добавляется в начало
    }
    else
    {
        rear->next = add; // иначе добавляем в конец
    }
    rear = add; // последний элемент назначается новым узлом
    return true; 
}

// Помещение первого элемента в переменную it и удаление его из очереди
template<typename Type>
bool QueueTP<Type>::dequeue(Type & it)
{
    if (front == 0)
    {
        return false;
    }
    it = front->item; // item — первый элемент в очереди
    el_items--;
    Node * temp = front; // сохранение местоположения первого элемента
    front = front->next; // сдвиг на следующий элемент
    delete temp; // удаление предыдущего первого элемента
    if (el_items == 0)
    {
        rear = 0;
    }
    return true;
}
#endif