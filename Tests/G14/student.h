#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
#include <valarray>

// class Student
// {
// private:
//     typedef std::valarray<double> ArrayDb;
//     std::string name; // включенный объект
//     ArrayDb scores; // включенный объект
//     // Закрытый метод для вывода оценок
//     std::ostream & arr_out(std::ostream & os) const;
// public:
//     Student() : name("Null student"), scores() {}
//     explicit Student(const std::string & s) : name(s), scores() {}
//     explicit Student(int n) : name("Null"), scores(n) {}
//     Student(const std::string & s, int n) : name(s), scores(n) {}
//     Student(const std::string & s, const ArrayDb & a) : name(s), scores(a) {}
//     Student(const char * str, double pd, int n) : name(str), scores(pd, n) {}
//     ~Student() {}
//     double Avarage() const;
//     const std::string & Name() const;
//     double & operator[](int i);
//     double operator[](int i) const;

//     // Друзья
//     // Ввод
//     friend std::istream & operator>>(std::istream & is, Student & stu); // 1 слово
//     friend std::istream & getline(std::istream & is, Student & stu); // 1 строка

//     // Вывод
//     friend std::ostream & operator<<(std::ostream & os, const Student & stu);
// };

class Student : private std::string, private std::valarray<double>
{
private:
    typedef std::valarray<double> ArrayDb;
    //Закрытый метод для вывода оценок
    std::ostream & arr_out(std::ostream & os) const;
public:
    Student() : std::string("Null Student"), ArrayDb() {}
    explicit Student(const std::string & s) : std::string(s), ArrayDb() {}
    explicit Student(int n) : std::string("nully"), ArrayDb(n) {}
    Student(const std::string & s, int n) : std::string(s), ArrayDb(n) {}
    Student(const std::string & s, const ArrayDb & a) : std::string(s), ArrayDb(a) {}
    Student(const char * s, const double * pd, int n) : std::string(s), ArrayDb(pd, n) {}
    ~Student() {}
    double Avarage() const;
    const std::string & Name() const;
    double & operator[](int i);
    double operator[](int i) const;

    // Друзья
    // Ввод
    friend std::istream & operator>>(std::istream & is, Student & stu); // 1 слово
    friend std::istream & getline(std::istream & is, Student & stu); // 1 строка

    // Вывод
    friend std::ostream & operator<<(std::ostream & os, const Student & stu);
};




#endif