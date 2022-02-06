#ifndef PERSON_H_
#define PERSON_H_
#include <string>
class person
{
private:
    static const int LIMIT = 25;
    std::string lname;
    char fname[LIMIT];
public:
   void Show() const; // формат: имя фамилия
   void FormalShow() const; // формат: фамилия, имя

   person(); // {lname = ""; fname = "\0";}
   person(const std::string & ln, const char * fn = "HEYYOU");
   person(const char * lln);
};

#endif