#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>

class NString
{
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    // Конструкторы и другие методы
    NString(const char * s); // конструктор
    NString(); // конструктор по умолчанию
    NString(const NString & s); // конструктор копирования
    ~NString(); // деструктор
    int lenght() const {return len;}

    // Методы перегруженных операций
    NString & operator=(const NString &);
    NString & operator=(const char *);
    char & operator[](int i);
    const char & operator[] (int i) const;

    // Дружественные функции перегруженных операций
    friend bool operator<(const NString & st1, const NString & st2);
    friend bool operator>(const NString & st1, const NString & st2);
    friend bool operator==(const NString & st1, const NString & st2);
    friend std::ostream & operator<<(std::ostream & os, const NString & st);
    friend std::istream & operator>>(std::istream & is, NString & st);

    //my funtions
    int has(char n);
    NString & operator+(const NString &);
    friend NString operator+(const char * s, const NString & st);
    void stringup();
    void stringlow();
    // Статическая функция
    static int HowMany();
};


#endif
