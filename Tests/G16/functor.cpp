#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
template<typename Type>
class TooBig
{
private:
    Type custoff;
public:
    TooBig(const Type & t) : custoff(t) {}
    bool operator()(const Type & t) { return t > custoff;}
};
void outint(int n ) {std::cout << n << " ";}


int main()
{
    TooBig<int> f100(100); // предельное значение = 100
    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    std::list<int> yadayada(vals, vals + 10);
    std::list<int> etcetera(vals, vals + 10);
    // Вместо этого в C++11 можно использовать следующий код:
    // list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    // list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

    std::cout << "Original lists:\n"; // исходные списки
    std::for_each(yadayada.begin(), yadayada.end(), outint);
    std::cout << std::endl;
    std::for_each(etcetera.begin(), etcetera.end(), outint);
    std::cout << std::endl;

    yadayada.remove_if(f100); // использование именованного
                                // функционального объекта

    etcetera.remove_if(TooBig<int>(200)); // конструирование
                                            // функционального объекта
    std::cout << "Trimmed lists:\n";          // усеченные списки

    std::for_each(yadayada.begin(), yadayada.end(), outint);
    std::cout << std::endl;
    std::for_each(etcetera.begin(), etcetera.end(), outint);
    std::cout << std::endl;
    return 0;
}