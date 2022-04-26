#ifndef STRNGBAD_H_
#define STRNGBAD_H_
#include <iostream>
class StrngBad
{
private:
    char * str;
    int len;
    static int num_string;
public:
    StrngBad(const char * s);
    StrngBad();
    ~StrngBad();
    friend std::ostream & operator<<(std::ostream & os, const StrngBad & st);
    StrngBad(const StrngBad & st);
    StrngBad & operator=(const StrngBad & st);
};



#endif
