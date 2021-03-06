#ifndef TV_H_
#define TV_H_

class Remote;
class Tv
{
public:
friend class Remote; // Remote имеет доступ к закрытой части Тѵ
    enum {On, Off};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};
    enum {NORM, INTERACTIVE};
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
    void mode_remote(Remote & r);
    void setting(Remote & r) const; // отображение всех настроек
private:
    int state; // On или Off
    int volume; // дискретные уровни громкости
    int maxchannel; // максимальное количество каналов
    int channel; // текущий канал
    int mode; // эфирное или кабельное телевидение
    int input; // TV или DVD
};

class Remote
{
friend class Tv;
public:
    Remote(int m = Tv::TV) : mode(m) {}
    bool volup(Tv & t) {return t.volup();}
    bool voldown(Tv & t) {return t.voldown();}
    void onoff(Tv & t) {t.onoff();}
    void chanup(Tv & t) {t.chanup();}
    void chapdown(Tv & t) {t.chandown();}
    void set_chan(Tv & t, int c) {t.channel = c;}
    void set_mode(Tv & t) {t.set_mode();}
    void set_input(Tv & t) {t.set_input();}
    void show_remote_mode();
private:
    int mode; // управление TV или DVD
    int mode_remote; // norm or interractive
};

#endif