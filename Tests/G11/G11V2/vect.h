#ifndef VECT_H_
#define VECT_H_
#include <iostream>
#include <cmath>
const double Rad_to_deg = 45.0 / atan(1.0);
namespace VECTOR
{
    class Vect
    {
    public:
        enum Mode {RECT, POL};
    private:
        double x; // горизонтальное значение
        double y; // вертикальное значение
        double mag; // длина вектора
        double ang; // направление вектора в градусах
        Mode mode; // RECT или POL

        // Закрытые методы для установки значений
        void set_ang();
        void set_mag();
        void set_x();
        void set_y();
    public:
        Vect();
        Vect(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vect();
        double xval() const {return x;} // сообщает значение х
        double yval() const {return y;} // сообщает значение y
        double magval() const {return mag;} // сообщает модуль
        double angval() const {return ang;} // сообщает угол
        void polar_mode(); // устанавливает режим в POL
        void rect_mode(); // устанавливает режим в RECT

        // Перегрузка операций
        Vect operator+(const Vect & b) const;
        Vect operator-(const Vect & b) const;
        Vect operator*(double n) const;
        Vect operator-() const;

        // Друзья
        friend Vect operator*(double n, const Vect & a);
        friend std::ostream & operator<<(std::ostream & os, const Vect & v);
    };
    
}

#endif