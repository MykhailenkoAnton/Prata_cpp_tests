#include <iostream>
#include <stdexcept>

class bad_all : public std::logic_error
{
private:
    double v1, v2;
public:
    bad_all(double a = 0, double b = 0, const std::string & n = "noname\n") : v1(a), v2(b), std::logic_error(n) {}
    double getV1() const {return v1;}
    double getV2() const {return v2;}
    virtual const char * what();
};
const char * bad_all::what()
{
    return std::logic_error::what();
}



class bad_hmean : public bad_all
{
public:
    bad_hmean(double a = 0, double b = 0, const std::string & sh = "Hmean():\n") : bad_all(a, b, sh) {}
    virtual const char * what();
};

const char * bad_hmean::what()
{
    return bad_all::what();
}




class bad_gmean : public bad_all
{
public:
    bad_gmean(double a = 0, double b = 0, const std::string & sg = "Gmean():\n") : bad_all(a, b, sg) {}
    virtual const char * what();
};

const char * bad_gmean::what()
{
    return bad_all::what();
}