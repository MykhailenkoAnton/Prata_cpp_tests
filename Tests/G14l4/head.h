#ifndef HEAD_H_
#define HEAD_H_
#include <string>
class Person
{
private:
    std::string f_name;
    std::string l_name;
protected:
    virtual void Data() const;
    virtual void Get();
public:
    Person() : f_name("no name"), l_name("no name") {}
    Person(const std::string & f, const std::string & l) : f_name(f), l_name(l) {}
    virtual void Set() = 0;
    virtual void Show() const = 0;
    virtual ~Person() = 0;
};

class Gunslinger : virtual public Person
{
private:
    double time_for_ready;
    int amount_nothes;
protected:
    void Data() const;
    void Get();
public:
    Gunslinger() : Person(), time_for_ready(0), amount_nothes(0) {}
    Gunslinger(const std::string & f, const std::string & l, double t, int a)
    : Person(f, l), time_for_ready(t), amount_nothes(a) {}
    Gunslinger(const Person & p, double t, int a) 
    : Person(p), time_for_ready(t), amount_nothes(a) {}

    void Set();
    double Draw() const;
    void Show() const;
};

class PokerPlayer : virtual public Person
{
private:
    int random_card;
protected:
    void Data() const;
    void Get();
public:
    PokerPlayer() 
    : Person(), random_card(0) {}
    PokerPlayer(const std::string & f, const std::string & l, int r)
    : Person(f, l), random_card(r) {}
    PokerPlayer(const Person & p, int r) 
    : Person(p), random_card(r) {}

    void Set();
    int Draw();
    void Show() const;
};

class BadDude : public Gunslinger, public PokerPlayer
{
private:
    double time_for_wepon;
    int card_next;
protected:
    void Data() const;
    void Get();
public:
    BadDude() {};
    BadDude(const std::string & f, const std::string & l, double tr, int am, int rc, double tw, int cn)
    : Person(f, l), Gunslinger(f, l, tr, am), PokerPlayer(f, l, rc), time_for_wepon(tw), card_next(cn) {}

    BadDude(const Person & pr, double tr, int am, int rc, double tw, int cn)
    : Person(pr), Gunslinger(pr, tr, am), PokerPlayer(pr, rc), time_for_wepon(tw), card_next(cn) {}

    BadDude(const Gunslinger & gl, int rc, double tw, int cn)
    : Person(gl), Gunslinger(gl), PokerPlayer(gl, rc), time_for_wepon(tw), card_next(cn) {}

    BadDude(const PokerPlayer & pp, double tr, int am, double tw, int cn)
    : Person(pp), Gunslinger(pp, tr, am), PokerPlayer(pp), time_for_wepon(tw), card_next(cn) {}

    void Set();
    void Show() const;

    double GDraw();
    int CDraw();
};




#endif