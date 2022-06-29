#include <iostream>

class bad_hmean
{
private:
    double v1;
    double v2;
public:
    bad_hmean(double a = 0, double b = 0) : v1(a), v2(b) {}
    void mesq();
};
inline void bad_hmean::mesq()
{
    std::cout << "hmean(" << v1 << ", " << v2 <<") : "
                << "invalid arguments: a = -b\n"; // неверные аргументы
}

class bad_gmean
{
public:
    double v1;
    double v2;
    bad_gmean(double a = 0, double b = 0) : v1(a), v2(b) {}
    const char * mesq();

};
inline const char * bad_gmean::mesq()
{
    return "gmean() arguments should be >= 0\n"; // аргументы gmean() должны быть >= 0
}
