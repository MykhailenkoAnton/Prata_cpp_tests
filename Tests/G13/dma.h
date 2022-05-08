#ifndef DMA_H_
#define DMA_H_
#include <iostream>
// Базовый класс, использующий динамическое вьщеление памяти
class baseDMA
{
private:
    char * label;
    int rating;
public:
    baseDMA(const char * l = "null", int r = 0);
    baseDMA(const baseDMA & rs);
    virtual ~baseDMA();
    baseDMA & operator=(const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};
// Производный класс без динамического вьщеления памяти
// Деструктор не нужен
// Используется неявный конструктор копирования
// Используется неявная операция присваивания
class lackDMA : public baseDMA
{
private:
    enum {COL_LEN = 40};
    char color[COL_LEN];
public:
    lackDMA(const char * c = "blank", const char * l = "null", int r = 0);
    lackDMA(const char * c, const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const lackDMA & rs);
};

// Производный класс с динамическим выделением памяти
class hasDMA : public baseDMA
{
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null", int r = 0);
    hasDMA(const char * s, const hasDMA & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif