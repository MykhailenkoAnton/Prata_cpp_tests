#include <iostream>

class Usseles
{
private:
    int n; // количество элементов
    char * pc; // указатель на данные
    static int ct; // количество объектов
    void ShowObj() const;
public:
    Usseles();
    ~Usseles();
    explicit Usseles(int k);
    Usseles(int k, char ch);
    Usseles(const Usseles & u); // обычный конструктор копирования
    Usseles(Usseles && u); // конструктор переноса
    Usseles operator+(const Usseles & u) const;
    // В версиях копирования и переноса необходима operator=()
    void ShowData() const;
};

// Реализация
int Usseles::ct = 0;

Usseles::Usseles()
{
    ++ct;
    n = 0;
    pc = nullptr;
    // Вызов конструктора по умолчанию; вывод количества объектов
    std::cout << "default constructor called; number of objects: " << ct << std::endl;
    ShowObj();
}

Usseles::Usseles(int k) : n(k)
{
    ++ct;
    // Вызов конструктора int; вывод количества объектов
    std::cout << "int constructor called; number of objects: " << ct << std::endl;
    pc = new char[n];
    ShowObj();
}

Usseles::Usseles(int k, char ch) : n(k)
{
    ++ct;
    // Вызов конструктора int, char; вывод количества объектов
    std::cout << "int, char constructor called; number of objects: " << ct << std::endl;
    pc = new char[n];
    for (int i = 0; i < n; i++)
    {
        pc[i] = ch;
    }
    ShowObj();
}

Usseles::Usseles(const Usseles & u) : n(u.n)
{
    ++ct;
    // Вызов конструктора копирования; вывод количества объектов
    std::cout << "copy const called; number of objects: " << ct << std::endl;
    pc = new char[n];
    for (int i = 0; i < n; i++)
    {
        pc[i] = u.pc[i];
    }
    ShowObj();
}

Usseles::Usseles(Usseles && u) : n(u.n)
{
    ++ct;
    // Вызов конструктора переноса; вывод количества объектов
    std::cout << "move constructor called; number of objects: " << ct << std::endl;
    pc = u.pc; // заимствовать адрес
    u.pc = nullptr; // установить старый объект в нулевой указатель
    u.n = 0;
    ShowObj();
}

Usseles::~Usseles()
{
    // Вызов деструктора; вывод количества объектов
    std::cout << "destructor called; objects left: " << --ct << std::endl;
    std::cout << "deleted object:\n";
    ShowObj();
    delete [] pc;
}

Usseles Usseles::operator+(const Usseles & u) const
{
    std::cout << "Entering operator+()\n"; // начало operator+()
    Usseles temp = Usseles(n + u.n);
    for (int i = 0; i < n; i++)
    {
        temp.pc[i] = pc[i];
    }
    for (int i = n; i < temp.n; i++)
    {
        temp.pc[i] = u.pc[i - n];
    }
    std::cout << "temp object:\n";  // временный объект
    std::cout << "Leaving operator+()\n"; // конец operator+()
    return temp;
}

void Usseles::ShowObj() const
{
    std::cout << "Number of elements: " << n; // количество элементов
    std::cout << " Data address: " << (void *) pc << std::endl; // адрес данных
}

void Usseles::ShowData() const
{
    if (n == 0)
    {
        std::cout << "(object empty)";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << pc[i];
        }
        std::cout << std::endl;
    }
}


int main()
{
    {
        Usseles one(10, 'x');
        Usseles two = one; // вызов конструктора копирования
        Usseles three(20, 'o');
        Usseles four(one + three); // вызов operator+(), конструктора переноса
        std::cout << "object one: ";
        one.ShowData();
        std::cout << "object two: ";
        two.ShowData();
        std::cout << "object three: ";
        three.ShowData();
        std::cout << "object four: ";
        four.ShowData();
    }
}