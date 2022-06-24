#ifndef TV_H_
#define TV_H_

// class Tv
// {
// public:
//     friend class Remote; // Remote имеет доступ к закрытой части Тѵ
//     enum {On, Off};
//     enum {MinVal, MaxVal = 20};
//     enum {Antenna, Cable};
//     enum {TV, DVD};
//     Tv(int s = Off, int mc = 125) 
//     : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
//     void onoff() {state = (state == On) ? Off : On;}
//     bool ison() const { return state == On;}
//     bool volup();
//     bool voldown();
//     void chanup();
//     void chandown();
//     void set_mode() {mode = (mode == Antenna) ? Cable : Antenna;}
//     void set_input() {input = (input == TV) ? DVD : TV;}
//     void setting() const; // отображение всех настроек
// private:
//     int state; // On или Off
//     int volume; // дискретные уровни громкости
//     int maxchannel; // максимальное количество каналов
//     int channel; // текущий канал
//     int mode; // эфирное или кабельное телевидение
//     int input; // TV или DVD
// };

// class Remote
// {
// private:
//     int mode; // управление TV или DVD
// public:
//     Remote(int m = Tv::TV) : mode(m) {}
//     bool volup(Tv & t) {return t.volup();}
//     bool voldown(Tv & t) {return t.voldown();}
//     void onoff(Tv & t) {t.onoff();}
//     void chanup(Tv & t) {t.chanup();}
//     void chapdown(Tv & t) {t.chandown();}
//     void set_chan(Tv & t, int c) {t.channel = c;}
//     void set_mode(Tv & t) {t.set_mode();}
//     void set_input(Tv & t) {t.set_input();}
// };

class Tv;

 class Remote
{
public:
    enum {On, Off};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};
private:
    int mode; // управление TV или DVD
public:
    Remote(int m = TV) : mode(m) {}
    bool volup(Tv & t);
    bool voldown(Tv & t);
    void onoff(Tv & t);
    void chanup(Tv & t);
    void chapdown(Tv & t);
    void set_chan(Tv & t, int c);
    void set_mode(Tv & t);
    void set_input(Tv & t);
};

 class Tv
{
public:
    friend void Remote::set_chan(Tv & t, int c);
    enum {On, Off};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};
    Tv(int s = Off, int mc = 125) 
    : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    void onoff() {state = (state == On) ? Off : On;}
    bool ison() const { return state == On;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() {mode = (mode == Antenna) ? Cable : Antenna;}
    void set_input() {input = (input == TV) ? DVD : TV;}
    void setting() const; // отображение всех настроек
private:
    int state; // On или Off
    int volume; // дискретные уровни громкости
    int maxchannel; // максимальное количество каналов
    int channel; // текущий канал
    int mode; // эфирное или кабельное телевидение
    int input; // TV или DVD
};

// Методы Remote как встроенные функции
inline bool Remote::volup(Tv & t) {return t.volup();}
inline bool Remote::voldown(Tv & t) {return t.voldown();}
inline void Remote::onoff(Tv & t) {t.onoff();}
inline void Remote::chanup(Tv & t) {t.chanup();}
inline void Remote::chapdown(Tv & t) {t.chandown();}
inline void Remote::set_chan(Tv & t, int c) {t.channel = c;}
inline void Remote::set_mode(Tv & t) {t.set_mode();}
inline void Remote::set_input(Tv & t) {t.set_input();}
#endif