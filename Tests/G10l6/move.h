#ifndef MOVE_H_
#define MOVE_H_

class move
{
private:
    double x;
    double y;
public:
    move(double a = 0, double b = 0); // устанавливает х, у в a, b
    void showmove() const; // отображает текущие значения х, у

    // Эта функция добавляет х из m к х вызывающего объекта,
    // чтобы получить новое значение х,
    // Добавляет у из m к у вызывающего объекта, чтобы получить новое
    // значение у, присваивает инициализированному объекту значения х, у
    // и возвращает его
    move add(const move & m) const;

    void reset(double a = 0, double b = 0);
};




#endif