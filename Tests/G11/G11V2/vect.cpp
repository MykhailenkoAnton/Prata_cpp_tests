#include <cmath>
#include "vect.h"

// Вычисляет количество градусов в одном радиане
const double Rad_to_deg = 45.0 / atan(1.0);

// Закрытые методы
// Вычисляет модуль из х и у
void VECTOR::Vect::set_mag()
{
    mag = sqrt(x * x + y * y);
}
void VECTOR::Vect::set_ang()
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
void VECTOR::Vect::set_x()
{
    x = mag * cos(ang);
}
// Устанавливает у по полярным координатам
void VECTOR::Vect::set_y()
{
    y = mag * sin(ang);
}
// Открытые методы
VECTOR::Vect::Vect() // конструктор по умолчанию
{
    x = y = mag = ang = 0.0;
    mode = RECT;
}
// Конструирует вектор по прямоугольным координатам, если form равно RECT
// (по умолчанию) , или по полярным координатам, если form равно POL
VECTOR::Vect::Vect(double n1, double n2, Mode form)
{
    mode = form;
    if (form == RECT)
    {
        x = n1;
        y = n2;
        set_mag();
        set_ang();
    }
    else if (form = POL)
    {
        mag = n1;
        ang = n2 / Rad_to_deg;
        set_x();
        set_y();
    }
    else
    {
        // Некорректный третий аргумент Vector(); вектор устанавливается в О
        std::cout << "Incorrect 3rd argument to Vector () — ";
        std::cout << "vector set to 0\n";
        x = y= mag = ang = 0.0;
        mode = RECT;
    }
}
// Устанавливает вектор по прямоугольным координатам, если form равно RECT
// (по умолчанию) , или по полярным координатам, если если form равно POL
void VECTOR::Vect::reset(double n1, double n2, Mode form)
{
    mode = form;
    if (form == RECT)
    {
        x = n1;
        y = n2;
        set_mag();
        set_ang();
    }
    else if (form = POL)
    {
        mag = n1;
        ang = n2 / Rad_to_deg;
        set_x();
        set_y();
    }
    else
    {
        // Некорректный третий аргумент Vector(); вектор устанавливается в О
        std::cout << "Incorrect 3rd argument to Vector () — ";
        std::cout << "vector set to 0\n";
        x = y= mag = ang = 0.0;
        mode = RECT;
    }
}
void VECTOR::Vect::polar_mode() // устанавливает режим полярных координат
{
    mode = POL;
}
void VECTOR::Vect::rect_mode() // устанавливает режим прямоугольных координат
{
    mode = RECT;
}
// Перегрузка операций
// Сложение двух векторов
VECTOR::Vect VECTOR::Vect::operator+(const Vect & b) const
{
    return Vect(x + b.x, y + b.y);
}
// Вычитание вектора b из а
VECTOR::Vect VECTOR::Vect::operator-(const Vect & b) const
{
    return Vect(x - b.x, y - b.y);
}
// Смена знака вектора на противоположный
VECTOR::Vect VECTOR::Vect::operator-() const
{
    return Vect(-x, -y);
}
// Умножение вектора на п
VECTOR::Vect VECTOR::Vect::operator*(double n) const
{
    return Vect(x * n, y * n);
}
// Дружественные методы
// Умножение п на вектор а
VECTOR::Vect VECTOR::operator*(double n, const Vect & a)
{
    return a * n;
}
// Отображает прямоугольные координаты, если mode равно RECT,
// или отображает полярные координаты, если mode равно POL
std::ostream & VECTOR::operator<<(std::ostream & os, const Vect & v)
{
    if (v.mode == VECTOR::Vect::RECT)
    {
        os << " (x,y) = (" << v.x << ", " << v.y << ")";
    }
    else if (v.mode == VECTOR::Vect::POL)
    {
        os << " (m,a) = (" << v.mag << ", " << v.ang * Rad_to_deg << ")";
    }
    else
    {
       os << "Vector object mode is invalid"; // недопустимый режим объекта Vector
    }
    return os;
}