#ifndef GL13_H_
#define GL13_H_
#include <iostream>

class baseALL
{
private:
    char * label;
    int rating;
public:
baseALL(const char * l = "null", int r = 0); 
baseALL(const baseALL & ba);
virtual ~baseALL();
baseALL & operator=(const baseALL & ba);
virtual void Viev() const = 0;
};

class baseDMA : public baseALL
{
public:
virtual void Viev() const;
baseDMA(const char * l = "null", int r = 0);
};

class luckDMA : public baseALL
{
private:
    char * color;
public:
virtual void Viev() const;
~luckDMA();
luckDMA(const char * c = "none", const char * l = "null", int r = 0);
luckDMA(const char * c, const baseALL & ba);
luckDMA(const luckDMA & lc);
luckDMA & operator=(const luckDMA & lc);
};

class hasDMA :public baseALL
{
private:
    char * style;
public:
virtual void Viev() const;
~hasDMA();
hasDMA(const char * s = "none", const char * l = "null", int r = 0);
hasDMA(const char * s, const baseALL & ba);
hasDMA(const hasDMA & hs);
hasDMA & operator=(const hasDMA & hs);
};
#endif