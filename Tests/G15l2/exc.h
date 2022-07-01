#include <iostream>
#include <stdexcept>
#include <string>

class bad_hmean : public std::logic_error
{
private:
    double v1, v2;
public:
    bad_hmean(double x = 0, double y = 0, const std::string & name = "bad_hmean, invalid arguments: a = -b\n") : v1(x), v2(y), std::logic_error(name) {}
};


class bad_gmean : public std::logic_error
{
public:
    double v1;
    double v2;
    bad_gmean(double a = 0, double b = 0, const std::string & name2 = "bad_gmean, gmean() arguments should be >= 0\n") : v1(a), v2(b), std::logic_error(name2) {}
};
