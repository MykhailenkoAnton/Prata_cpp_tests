#include <iostream>
#include <cstdlib>
#include <ctime>

class Grand
{
private:
    int hold;
public:
    Grand(int h = 0) : hold(h) {}
    virtual void Speak() const {std::cout << "I am a !!!Grand!!! class !\n";}
    virtual int Value() const { return hold; }
};

class Superb : public Grand
{
public:
    Superb(int h = 0) : Grand(h) {}
    void Speak() const {std::cout << "I am a superb class!!\n";}
    virtual void Say() const {std::cout << "I hold the !!!Superb!!! value of " << Value() << "!\n";}
};

class Magnificent : public Superb
{
private:
    char ch;
public:
    Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c) {}
    void Speak() const {std::cout << "I am a !!!Magnificent!!! class !\n";}
    void Say() const {std::cout << "I hold the character " << ch <<
                                    " and the integer " << Value() << " !\n";}
};

Grand * GetOne();

int main()
{
    srand(time(0));
    Grand * pg;
    Superb * ps;
    for (int i = 0; i < 5; i++)
    {
        pg = GetOne();
        pg->Speak();
        if (ps = dynamic_cast<Superb *> (pg))
        {
            ps->Say();
        }
    }
    return 0;
}

Grand * GetOne() // случайным образом генерирует один из трех типов объектов
{
    Grand * p;
    switch (rand() % 3)
    {
    case 0:
        p = new Grand(rand() % 100);
        break;
    case 1:
        p = new Superb(rand() % 100);
        break;
    case 2:
        p = new Magnificent(rand() % 100, 'A' + rand() % 26);
        break;
    default:
        break;
    }
    return p;
}