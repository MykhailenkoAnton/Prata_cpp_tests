#include "student1.h"

// Открытые методы
double Student::Avarage() const
{
    if (ArrayDb::size() > 0)
    {
        return ArrayDb::sum() / ArrayDb::size();
    }
    else
    {
        return 0;
    }
    
}

const std::string & Student::Name() const
{
    return (const std::string &) *this;
}

double Student::operator[](int i) const
{
    return ArrayDb::operator[](i);
}

double & Student::operator[](int i)
{
    return ArrayDb::operator[](i);
}

// Закрытый метод
std::ostream & Student::arr_out(std::ostream & os) const
{
    int i;
    int lim = ArrayDb::size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << ArrayDb::operator[](i) << " ";
            if (i % 5 == 4)
            {
                os << std::endl;
            }
        }
        if (i % 5 != 0)
        {
            os << std::endl;
        }
    }
    else
    {
        os << " empty array ";
    }
    return os;
}

// Друзья
// Использует версию operator»() из класса string
std::istream & operator>>(std::istream & is, Student & stu)
{
    is >> (std::string &) stu;
    return is;
}
// Использует версию getline(ostream &, const string &) из класса string
std::istream & getline(std::istream & is, Student & stu)
{
    getline(is,(std::string &)stu);
    return is;
}
// Использует версию operator«() из класса string
std::ostream & operator<<(std::ostream & os, Student & stu)
{
    os << "Scores for " << (const std::string &) stu << ":\n";
    stu.arr_out(os); // использование закрытого метода для scores
    return os;
}