#include <iostream>
#include <cstring>
#include "string1.h"

// Инициализация статического члена класса
int NString::num_strings = 0;

// Статический метод
int NString::HowMany()
{
    return num_strings;
}

// Методы класса
NString::NString(const char * s) // создание String из С-строки
{
    len = strlen(s); // установка размера
    str = new char[len + 1]; // выделение памяти
    strcpy(str, s); // инициализация указателя
    num_strings++; // корректировка счетчика объектов
}
NString::NString() // конструктор по умолчанию
{
    len = 4;
    str = new char[1];
    str[0] = '\0'; // строка по умолчанию
    num_strings++;
}
NString::NString(const NString & st)
{
    num_strings++; // обработка обновления статического члена
    len = st.len; // длина та же
    str = new char[len + 1]; // выделение памяти
    strcpy(str, st.str); // копирование строки в новое место
}
NString::~NString() // требуется
{
    --num_strings; // требуется
    delete [] str; // требуется
}

// Методы перегруженных операций

// Присваивание объекта String объекту String
NString & NString::operator=(const NString & st)
{
    if (this == &st)
    {
        return *this;
    }
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this;
}
// Присваивание С-строки объекту String
NString & NString::operator=(const char * s)
{
    delete [] str;
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    return *this;
}
// Доступ для чтения и записи отдельных символов в неконстантном объекте String
char & NString::operator[](int i)
{
    return str[i];
}
// Доступ только для чтения отдельных символов в константном объекте String
const char & NString::operator[] (int i) const
{
    return str[i];
}
// Дружественные функции перегруженных операций
bool operator<(const NString & st1, const NString & st2)
{
    return(strcmp(st1.str, st2.str) < 0);
}
bool operator>(const NString & st1, const NString & st2)
{
    return st2.str < st1.str;
}
bool operator==(const NString & st1, const NString & st2)
{
    return(strcmp(st1.str, st2.str) == 0);
}
// Простой вывод String
std::ostream & operator<<(std::ostream & os, const NString & st)
{
    os << st.str;
    return os;
}
// Простой ввод String
std::istream & operator>>(std::istream & is, NString & st)
{
    char temp[NString::CINLIM];
    is.get(temp, NString::CINLIM);
    if (is)
    {
        st = temp;
    }
    while (is && is.get() != '\n')
    {
        continue;
    }
    return is;
}