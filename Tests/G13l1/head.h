#ifndef HEAD_H_
#define HEAD_H_

class Cd
{
private:
    char performers[20];
    char label[20];
    int selections; // количество сборников
    double playtime; // время воспроизведения в минутах
public:
    Cd(const char * s1, const char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
    char mainName[50];
public:
    virtual void Report() const;
    Classic(const char * s, const char * s1, const char * s2, int n, double x);
    Classic(const char * s, const Cd & c);
    Classic(const Classic & c);
    Classic & operator=(const Classic & c);
    Classic();
};




#endif