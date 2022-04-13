#ifndef STRING1_H_
#define STRING1_H_
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
    
};


#endif
