#include <iostream>
#include <utility>

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
    Usseles & operator=(const Usseles & u); // операция присваивания с копированием
    Usseles & operator=(Usseles && u); // операция присваивания с переносом
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
}

Usseles::Usseles(int k) : n(k)
{
    ++ct;
    // Вызов конструктора int; вывод количества объектов
    pc = new char[n];
}

Usseles::Usseles(int k, char ch) : n(k)
{
    ++ct;
    // Вызов конструктора int, char; вывод количества объектов
    pc = new char[n];
    for (int i = 0; i < n; i++)
    {
        pc[i] = ch;
    }
}

Usseles::Usseles(const Usseles & u) : n(u.n)
{
    ++ct;
    // Вызов конструктора копирования; вывод количества объектов
    pc = new char[n];
    for (int i = 0; i < n; i++)
    {
        pc[i] = u.pc[i];
    }
}

Usseles::Usseles(Usseles && u) : n(u.n)
{
    ++ct;
    pc = u.pc; // заимствовать адрес
    u.pc = nullptr; // установить старый объект в нулевой указатель
    u.n = 0;
}

Usseles::~Usseles()
{
    // Вызов деструктора; вывод количества объектов
    delete [] pc;
}
Usseles & Usseles::operator=(const Usseles & u) // операция присваивания с копированием
{
    std::cout << "copy assignment operator called:\n";

    if (this == &u)
    {
        return *this;
    }
    delete [] pc;
    n = u.n;
    pc = new char[n];
    for (int i = 0; i < n; i++)
    {
        pc[i] = u.pc[i];
    }
    return *this;
}

Usseles & Usseles::operator=(Usseles && u) // операция присваивания с переносом
{
    std::cout << "move assignment operator called:\n";
    if (this == &u)
    {
        return *this;
    }
    delete [] pc;
    n = u.n;
    pc = u.pc;
    u.n = 0;
    u.pc = nullptr;
    return *this;
    
}
Usseles Usseles::operator+(const Usseles & u) const
{
    Usseles temp = Usseles(n + u.n);
    for (int i = 0; i < n; i++)
    {
        temp.pc[i] = pc[i];
    }
    for (int i = n; i < temp.n; i++)
    {
        temp.pc[i] = u.pc[i - n];
    }
    return temp;
}

void Usseles::ShowObj() const
{
    std::cout << "Number of elements: " << n; // количество элементов
    std::cout << " Data address: " << (void *) pc << std::endl; // адрес данных
}

void Usseles::ShowData() const
{
    if (pc == nullptr) // n == 0
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
        Usseles two = one + one; // вызов конструктора с переносом
        std::cout << "object one: ";
        one.ShowData();
        std::cout << "object two: ";
        two.ShowData();
        Usseles three, four;
        std::cout << "three = one\n";
        three = one;
        std::cout << "now object three = ";
        three.ShowData();
        std::cout << "and object one = ";
        one.ShowData();
        std::cout << "four = one + two\n";
        four = one + two; // автоматическое присваивание с переносом
        std::cout << "now object four = ";
        four.ShowData();
        std::cout << "four = move(one)\n";
        four = std::move(one); // принудительное присваивание с переносом
        std::cout << "now object four = ";
        four.ShowData();
        std::cout << "and object one = ";
        one.ShowData();
    }
}