#ifndef STRNGBAD_H_
#define STRNGBAD_H_
#include <iostream>
class StngBad
{
private:
    char * str; // указатель на строку
    int len; // длина строки
    static int num_string; // количество объектов
public:
    StngBad(const char * s);
    StngBad();
    ~StngBad();
    StngBad(const StngBad & st); // конструктор копирования
    StngBad & operator=(const StngBad & st); // операция присваивания
    friend std::ostream & operator<<(std::ostream & os, const StngBad & st);
};

#endif
