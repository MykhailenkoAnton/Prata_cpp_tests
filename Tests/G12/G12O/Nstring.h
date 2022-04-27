#ifndef NSTRING_H_
#define NSTRING_H_
#include <iostream>

class Nstring
{
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    Nstring(const char * s); // конструктор
    Nstring(); // конструктор по умолчанию
    Nstring(const Nstring &); // конструктор копирования
    ~Nstring(); // деструктор
    int lenght()const {return len;}

    // Методы перегруженных операций
    Nstring & operator=(const Nstring &);
    Nstring & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i) const;

    // Дружественные функции перегруженных операций
    friend bool operator>(const Nstring & st1, const Nstring & st2);
    friend bool operator<(const Nstring & st1, const Nstring & st2);
    friend bool operator==(const Nstring & st1, const Nstring & st2);
    friend std::ostream & operator<<(std::ostream & os, const Nstring & st);
    friend std::istream & operator>>(std::istream & is, Nstring & st);

    // Статическая функция
    static int HowMany();
};

#endif
