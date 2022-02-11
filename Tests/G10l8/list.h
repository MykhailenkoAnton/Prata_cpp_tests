#ifndef LIST_H_
#define LIST_H_
#include <string>
typedef std::string items;
class List
{
private:
    enum {MAX = 4};
    items IT[MAX]; // string[4]
    int top;
public:
    void add(items &);
    bool isFull() const;
    bool isEmpty() const;
    void show() const;
    void visit(void (*pf) (items &));
    List();
};


#endif