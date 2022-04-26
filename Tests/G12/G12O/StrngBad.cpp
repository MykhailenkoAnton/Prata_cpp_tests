#include <iostream>
#include <cstring>
#include "StrngBad.h"
// Инициализация статического члена класса
int StrngBad::num_string = 0;

// Методы класса
// Создание StringBad из С-строки
StrngBad::StrngBad(const char * s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num_string++;
    std::cout << num_string << " : \"" << str << "\" object created\n";
}
StrngBad::StrngBad()
{
    len = 4;
    str = new char[4];
    strcpy(str, "C++");
    num_string++;
    std::cout << num_string << " : \"" << str << "\" default object created\n";
}
StrngBad::~StrngBad()
{
    std::cout << "\"" << str << "\" object deleted, ";
    --num_string;
    std::cout << num_string << " left\n";
    delete [] str;
}
std::ostream & operator<<(std::ostream & os, const StrngBad & st)
{
    os << st.str;
    return os;
}
StrngBad::StrngBad(const StrngBad & st)
{
    num_string++; // обновление статического члена
    len = st.len; // та же самая длина
    str = new char[len + 1]; // выделение памяти
    strcpy(str, st.str); // копирование строки в новое место
    std::cout << num_string << " : \"" << str << "\" object created\n"; // для целей отладки
}
StrngBad & StrngBad::operator=(const StrngBad & st)
{
    if (this == &st) // присваивание объекта самому себе
    {
        return *this; // все готово
    }
    delete [] str; // освобождение старой строки
    len = st.len; 
    str = new char[len + 1]; // выделение памяти для новой строки
    strcpy(str, st.str); // копирование строки
    return *this; // возврат ссылки на вызывающий объект
}