#include <iostream>
#include <cstring>
#include "stngbad.h"

// Инициализация статического члена класса
int StngBad::num_string = 0;

// Методы класса

// Создание StringBad из С-строки
StngBad::StngBad(const char * s)
{
    len = std::strlen(s);                        // установка размера
    str = new char[len + 1];                        // выделение памяти
    std::strcpy(str, s);                        // инициализация указателя
    num_string++;                        // счетчик объектов
    std::cout << num_string << ": \"" << str << "\" object created\n"; // для целей отладки
}
StngBad::StngBad() // конструктор по умолчанию
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++"); // строка по умолчанию
    num_string++;
    std::cout << num_string << ": \"" << str << "\" default object created\n"; // для целей отладки
}
StngBad::~StngBad()  // необходимый деструктор
{
    std::cout << "\"" << str << "\" object deleted, "; // для целей отладки
    --num_string; // является обязательным
    std::cout << num_string << " left\n"; // для целей отладки
    delete [] str;
}
std::ostream & operator<<(std::ostream & os, const StngBad & st)
{
    os << st.str;
    return os;
}
StngBad::StngBad(const StngBad & st)
{
    num_string++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    std::cout << num_string << ": \"" << str << "\" object created\n"; // для целей отладки
}
StngBad & StngBad::operator=(const StngBad & st)
{
    if (this == &st)
    {
        return *this;
    }
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return * this;
}