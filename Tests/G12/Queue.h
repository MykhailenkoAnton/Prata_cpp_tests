#ifndef QUEUE_H_
#define QUEUE_H_
// Очередь, содержащая элементы Customer
class Costumer
{
private:
    long arrive; // момент появления клиента
    int processtime; // время обслуживания клиента
public:
    Costumer() {arrive = processtime = 0;}
    void set(long when);
    long when() const {return arrive;}
    int ptime() const {return processtime;}
};

typedef Costumer Item;
class Queue
{
    
private:
    struct Node
    {
        Item item;
        struct Node * next;
    };
    enum {Q_SIZE = 10};
    Node * front; // указатель на начало Queue
    Node * rear; // указатель на конец Queue
    int items; // текущее количество элементов в Queue
    const int qsize; // максимальное количество элементов в Queue

    // Упреждающие объявления для предотвращения открытого копирования
    Queue(const Queue & q) : qsize(0) {}
    Queue & operator=(const Queue & q) {return *this;}
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item & item);
    bool dequeue(Item & item);

};

#endif
