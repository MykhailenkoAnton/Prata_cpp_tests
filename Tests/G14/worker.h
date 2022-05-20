// #ifndef WORKER_H_
// #define WORKER_H_
// #include <string>
// class Worker
// {
// private:
//     std::string fullname;
//     long id;
// public:
//     Worker() : fullname("no one"), id(0L) {}
//     Worker(const std::string & s, long n) : fullname(s), id(n) {}
//     virtual ~Worker() = 0; // чистый виртуальный деструктор
//     virtual void Set();
//     virtual void Show() const;
// };

// class Waiter : public Worker // официант
// {
// private:
//     int panache;
// public:
//     Waiter() : Worker(), panache(0) {}
//     Waiter(const std::string & s, long n, int p = 0): Worker(s, n), panache(p) {}
//     Waiter(const Worker & w, int p = 0) : Worker(w), panache(p) {}
//     void Set();
//     void Show() const;
// };

// class Singer : public Worker
// {
// protected:
//     enum{other, alto, contralto, soprano, bass, baritone, tenor};
//     enum{Vtypes = 7};
// private:
//     static char *pv[Vtypes]; // строковые эквиваленты видов голоса
//     int voice;
// public:
//     Singer() : Worker(), voice(other) {}
//     Singer(const std::string & s, long l, int c = other) : Worker(s, l), voice(c) {}
//     Singer(const Worker & w, int c = other) : Worker(w), voice(c) {}
//     void Set();
//     void Show() const; 
// };





// #endif

#ifndef WORKER_H_
#define WORKER_H_
#include <string>
class Worker
{
private:
    std::string fullname;
    long id;
protected:
    virtual void Data() const;
    virtual void Get();
public:
    Worker() : fullname("no one"), id(0L) {}
    Worker(const std::string & s, long n) : fullname(s), id(n) {}
    virtual ~Worker() = 0; // чистый виртуальный деструктор
    virtual void Set() = 0;
    virtual void Show() const = 0;
};

class Waiter : virtual public Worker // официант
{
private:
    int panache;
protected:
    void Data() const;
    void Get();
public:
    Waiter() : Worker(), panache(0) {}
    Waiter(const std::string & s, long n, int p = 0): Worker(s, n), panache(p) {}
    Waiter(const Worker & w, int p = 0) : Worker(w), panache(p) {}
    void Set();
    void Show() const;
};

class Singer : virtual public Worker
{
protected:
    enum{other, alto, contralto, soprano, bass, baritone, tenor};
    enum{Vtypes = 7};
    void Data() const;
    void Get();
private:
    static char *pv[Vtypes]; // строковые эквиваленты видов голоса
    int voice;
public:
    Singer() : Worker(), voice(other) {}
    Singer(const std::string & s, long l, int c = other) : Worker(s, l), voice(c) {}
    Singer(const Worker & w, int c = other) : Worker(w), voice(c) {}
    void Set();
    void Show() const; 
};
// Множественное наследование
class SingingWaiter : public Singer, public Waiter
{
protected:
    void Data() const;
    void Get();
public:
    SingingWaiter() {}
    SingingWaiter(const std::string & s, long n, int p = 0, int v = other) : Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {}
    SingingWaiter(const Worker & wl, int p = 0, int v = other) : Worker(wl), Waiter(wl, p), Singer(wl, v) {}
    SingingWaiter(const Waiter & wt, int v = other) : Worker(wt), Waiter(wt), Singer(wt, v) {}
    SingingWaiter(const Singer & sn, int p = 0) : Worker(sn), Waiter(sn, p), Singer(sn) {}
    void Set();
    void Show() const;
};

#endif