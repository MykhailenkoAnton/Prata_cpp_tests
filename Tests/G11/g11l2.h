#ifndef G11L2_H_
#define G11L2_H_
#include <iostream>
namespace VECTOR
{
    class Vector
    {
    public:
    enum Mode {RECT, POL}; // RECT — для режима прямоугольных координат, POL — для режима полярных координат
    private:
        double x; // горизонтальное значение
        double y; // вертикальное значение
        Mode mode; // направление вектора в градусах
    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const {return x;} // сообщает значение х
        double yval() const {return y;} // сообщает значение у
        double magval() const;// сообщает модуль
        double angval() const; // сообщает угол
        void polar_mode(); // устанавливает режим в POL
        void rect_mode(); // устанавливает режим в RECT

        // Перегрузка операций
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;

        // Друзья
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };
}
#endif