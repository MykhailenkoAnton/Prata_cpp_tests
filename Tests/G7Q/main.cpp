#include <iostream>
#include <string>
void Er(int ar[], int n, int a);
void Er(int * begin, int * end, int n);
double max(const double * ar, int n);
int replace (char * str, char cl, char c2) ;
int main()
{
    void igor(void);
    float tofu(int n);
    double mpg(double a, double b);
    long summation(long ar [], int n);
    double doctor(const char * ch);
    void ofcourse(boss dapos); // boss - struct
    std::string(const map * m); // map - struct

    int Error[5];


    return 0;
}
void Er(int ar[], int n, int a)
{
    for (int i = 0; i < 5; i++)
    {
        ar[i] = a;
    }
}

void Er(int * begin,int * end, int n)
{
    int * pt;
    for (pt = begin; pt != end; pt++)
    {
        *pt = n;
    }
}
double max(const double * ar, int n)
{
    double max;
    if (n < 1)
    {
        return 0;
    }
    else
    {
        max = ar[0];
        for (int i = 1; i < n; i++)
        {
            if(ar[0] > max)
            max = ar[i];
        }
    }
    return max;
}

int replace (char * str, char c1, char c2)
{
    char ch;
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c1)
        {
            ch = c1;
            str[i] = ch;
            count++;
        }
        i++;
    }
    
    return 0;
}

int jungle (int (*pn) (const char *));

struct applicant {
char name[3 0] ;
int credit_ratings[3];
};

void show_ap(applicant a)
{
    std::cout << a.name << endl;
    for(int i = 0; i < 3; i++)
    {
        std::cout << a.credit_ratings[i] << endl;
    }
}

void show_a(const applicant * a)
{
    std::cout << a->name << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << a->credit_ratings[i] << endl;
    }
}

typedef void (*p_f1)(applicatoin * a); // prototip
p_f1 p1 = f1;

typedef const char * (*p_f2)(const app * a, const app * b); // prototip
p_f2 p2 = f2;

p_f1 ar[5];
p_f2 (*pa)[10];