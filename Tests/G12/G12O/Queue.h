#ifndef QUEUE_H_
#define QUEUE_H_

class Customer
{
private:
    long arrive; // момент появления клиента
    int processtime; // время обслуживания клиента
public:
    Customer() {arrive = processtime = 0;}
    void set(long when);
    long when() const {return arrive;}
    int ptime() const {return processtime;}
};

class Queue
{
private:
    // Определения области действия класса
    // Node — это вложенное определение структуры, локальное для данного класса
    struct Node
    {
        Customer item;
        struct Node * next;
    };
    enum {Q_SIZE = 10};
    // Закрытые члены класса
    Node * front; // указатель на начало Queue
    Node * rear; // указатель на конец Queue
    int items; // текущее количество элементов в Queue
    const int qsize; // максимальное количество элементов в Queue
    // Упреждающие объявления для предотвращения открытого копирования
    Queue(const Queue & q) : qsize(0) {}
    Queue & operator=(const Queue & q) {return *this;}
public:
    Queue(int qs = Q_SIZE); // создание очереди с предельным размером qs
    ~Queue();
    bool isEmpty() const;
    bool isFull() const;
    int queuecount() const;
    bool enqueue(const Customer & item);// добавление элемента в конец
    bool dequeue(Customer & item); // удаление элемента из начала 
};



#endif