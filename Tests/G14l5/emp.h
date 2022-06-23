#ifndef EMP_H_
#define EMP_H_
#include <iostream>
#include <string>

class abstr_emp
{
private:
    std::string fname;
    std::string lname;
    std::string job;
public:
    abstr_emp() : fname("f"), lname("l"), job("j") {}
    abstr_emp(const std::string & fn, const std::string & ln, const std::string & j)
    : fname(fn), lname(ln), job(j) {}
    virtual void ShowAll() const; // выводит все данные с именами
    virtual void SetAll(); // запрашивает значения у пользователя
    friend std::ostream & operator<<(std::ostream & os, const abstr_emp & e); // Выводит только имя и фамилию
    virtual ~abstr_emp() = 0; // виртуальный базовый класс
};


class employee : public abstr_emp
{
public:
    employee() : abstr_emp() {}
    employee(const std::string & fn, const std::string & ln, const std::string & j)
    : abstr_emp(fn, ln, j) {}
    virtual void ShowAll() const;
    virtual void SetAll();
};


class manager : virtual public abstr_emp
{
private:
    int inchargeof; // количество управляемых abstr_emp
protected:
    int InChargeOf() const {return inchargeof; } // вывод
    int & InChargeOf() {return inchargeof; } // ввод
public:
    manager() : abstr_emp(), inchargeof(0) {}

    manager(const std::string & fn, const std::string & ln, const std::string & j, int ico = 0)
    : abstr_emp(fn, ln, j), inchargeof(ico) {}

    manager(const abstr_emp & e, int ico) 
    : abstr_emp(e), inchargeof(ico) {}

    manager(const manager & m) : abstr_emp(m)
    {
        inchargeof = m.inchargeof;
    }
 
    virtual void ShowAll() const;
    virtual void SetAll(); 
};


class fink : virtual public abstr_emp
{
private:
    std::string reportsto; // кому выводить отчеты
protected:
    const std::string ReportsTo() const { return reportsto;}
    std::string & ReportsTo() {return reportsto;}
public:
    fink() : abstr_emp(), reportsto("n") {}

    fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo)
    : abstr_emp(fn, ln, j), reportsto(rpo) {}

    fink(const abstr_emp & e, const std::string & rpo)
    : abstr_emp(e), reportsto(rpo) {}

    fink(const fink & e) : abstr_emp(e)
    {
        reportsto = e.reportsto;
    }


    virtual void ShowAll() const;
    virtual void SetAll();
};


class highfink : public manager, public fink
{
public:
    highfink() : abstr_emp(), manager(), fink() {}

    highfink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo, int ico)
    : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

    highfink(const abstr_emp & e, const std::string & rpo, int ico)
    : abstr_emp(e), manager(e, ico), fink(e, rpo) {}

    highfink(const fink & f, int ico)
    : abstr_emp(f), manager(f, ico), fink(f) {}

    highfink(const manager & m, const std::string & rpo)
    : abstr_emp(m), manager(m), fink(m, rpo) {}

    highfink(const highfink & h) : abstr_emp(h), manager(h), fink(h) {}

    virtual void ShowAll() const;
    virtual void SetAll();
};

#endif