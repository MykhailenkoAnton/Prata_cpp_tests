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
    void set(long when)
    {
        processtime = rand() % 3 + 1;
        arrive = when;  
    }
    
    long when() const {return arrive;}
    int ptime() const {return processtime;}
};

typedef Costumer Item;

#endif
