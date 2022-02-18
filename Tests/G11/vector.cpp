#include <cmath>
#include "vect.h"
namespace VECTOR
{
    const double Rad_to_dag = 45.0 / atan(1.0); // Вычисляет количество градусов в одном радиане // должно быть приблизительно равно 57.2 9577 95130823
    // Закрытые методы
    // Вычисляет модуль из х и у

    void Vector::set_mag()
    {
        mag = sqrt(x*x + y*y);
    }
    void Vector::set_ang()
    {
        if (x == 0.0 && y == 0.0)
        {
            ang = 0.0;
        }
        else
        {
            ang = atan2(y, x);
        }
    }
    // Устанавливает х по полярным координатам
    void Vector::set_x()
    {
        x = mag * cos(ang);
    }
    // Устанавливает у по полярным координатам
    void Vector::set_y()
    {
        y = mag * sin(ang);
    }
    // Открытые методы
    Vector::Vector() // конструктор по умолчанию
    {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }
    // Конструирует вектор по прямоугольным координатам, если form равно RECT
    // (по умолчанию) , или по полярным координатам, если form равно POL
    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_dag;
            set_x();
            set_y();
        }
        else
        {
            // Некорректный третий аргумент Vector(); вектор устанавливается в О
            std::cout << "Incorrect 3rd argument to Vector () — ";
            std::cout << "vector set to 0\n";
            x = y = ang = mag = 0.0;
            mode = RECT;
        }
        
    }
    // Устанавливает вектор по прямоугольным координатам, если form равно RECT
    // (по умолчанию) , или по полярным координатам, если если form равно POL
    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2 / Rad_to_dag;
            set_x();
            set_y();
        }
        else
        {
            std::cout << "Incorrect 3rd argument to Vector () — ";
            std::cout << "vector set to 0\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }
    Vector::~Vector() // деструктор
    {
    }
    void Vector::polar_mode() // устанавливает режим полярных координат
    {
        mode = POL;
    }
    void Vector::rect_mode() // устанавливает режим прямоугольных координат
    {
        mode = RECT;
    }
    // Перегрузка операций
    // Сложение двух векторов
    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x, y + b.y);
    }
    // Вычитание вектора b из а
    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x, y - b.y);
    }
    // Смена знака вектора на противоположный
    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }
    // Умножение вектора на п
    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }
    // Дружественные методы
    // Умножение п на вектор а
    Vector operator*(double n, const Vector & a)
    {
        return a * n;
    }
    // Отображает прямоугольные координаты, если mode равно RECT,
    // или отображает полярные координаты, если mode равно POL
    std::ostream & operator<<(std::ostream & os, const Vector & v)
    {
        if (v.mode == Vector::RECT)
        {
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        }
        else if (v.mode == Vector::POL)
        {
            os << "(m,a) = (" << v.mag << ", " << v.ang * Rad_to_dag << ")";
        }
        else 
        {
            os << "Vector object mode is invalid"; // недопустимый режим объекта Vector
        }
        return os;
    }
}