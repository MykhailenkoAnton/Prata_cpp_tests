#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
// 8.1
// inline double square(double x) {return x * x;}
// int main()
// {
//     double a, b;
//     double c = 13.0;
//     a = square(5.0);
//     b = square(4.5 + 7.5);
//     std::cout << "a = " << a << ",b = " << b;
//     std::cout << ",c = " << c << std::endl;
//     std::cout << "C squared = " << square(c++) << "\n";
//     std::cout << "Now c = " << c << std:: endl;
//     return 0;
// }

// 8.2
// int main()
// {
    // int rats = 101;
    // int & rodents = rats;
    // std::cout << "rats = " << rats;
    // std::cout << ", rodents = " << rodents << std::endl;
    // rodents++;
    // std::cout << "rats = " << rats;
    // std::cout << ", rodents = " << rodents << std::endl;
    // std::cout << "adress rats = " << &rats;
    // std::cout << ", adress rodents = " << &rodents << std::endl;
    // return 0;
// }

// 8.3
// int main()
// {
//     int rats = 101;
//     int & rodents = rats;
//     std::cout << "rats = " << rats;
//     std::cout << ", rodents = " << rodents << std::endl;
//     rodents++;
//     std::cout << "rats = " << rats;
//     std::cout << ", rodents = " << rodents << std::endl;
//     std::cout << "adress rats = " << &rats;
//     std::cout << ", adress rodents = " << &rodents << std::endl;

//     int buisness = 50;
//     rodents = buisness;
//     std::cout << "buisness = " << buisness;
//     std::cout << ", rats = " << rats;
//     std::cout << ", rodents = " << rodents << std::endl;


//     std::cout << "buisness adress = " << &buisness;
//     std::cout << ", adress rodents = " << &rodents << std::endl;
//     return 0;
// }

//8.4
// void swarp(int & a, int & b);
// void swapp(int * p, int * q);
// void swavv(int a, int b);
// int main()
// {
//     int wallet1 = 300;
//     int wallet2 = 400;
//     std::cout << "wallet1 = $" << wallet1;
//     std::cout << ", wallet2 = $" << wallet2 << std::endl;

//     std::cout << "Using references to swap contents:\n";
//     swarp(wallet1, wallet2);
//     std::cout << "wallet1 = $" << wallet1;
//     std::cout << ", wallet2 = $" << wallet2 << std::endl;

//     int * a = &wallet1;
//     int * b = &wallet2;

//     std::cout << "?????? !!! Using pointers to swap contents again:\n";
//     swapp(a, b);
//     std::cout << "wallet1 = $" << wallet1;
//     std::cout << ", wallet2 = $" << wallet2 << std::endl;

//     std::cout << "Trying to use passing by value:\n";
//     swavv(wallet1, wallet2);
//     std::cout << "wallet1 = $" << wallet1;
//     std::cout << ", wallet2 = $" << wallet2 << std::endl;

//     return 0;
// }
// void swarp(int & a, int & b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// void swapp(int * p, int * q)
// {
//     int temp;
//     temp = *p;
//     *p = *q;
//     *q = temp;
// }
// void swavv(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

//8.5
// double cube(double x);
// double recube(double & xa);
// int main()
// {
//     double x = 3.0;
//     std::cout << cube(x);
//     std:: cout << " cube of " << x << std::endl;

//     std::cout << recube(x);
//     std::cout << " cube of " << x << std::endl;
//     return 0;
// }
// double cube(double x)
// {
//     x *= x * x;
//     return x;
// }
// double recube(double & xa)
// {
//     xa *= xa * xa;
//     return xa;
// }

// 8.6
// struct free_throws
// {
//     std::string name;
//     int made;
//     int attemps;
//     float percent;
// };
// void display(const free_throws & ft);
// void set_pc(free_throws & ft);
// const free_throws & accumulate(free_throws & target, const free_throws & source);
// int main()
// {
//     free_throws one = {"Ifelsa Branch", 13, 14};
//     free_throws two = {"Andor Knott", 10, 16};
//     free_throws three = {"Minnie Max", 7, 9};
//     free_throws four = {"Whily Looper", 5, 9};
//     free_throws five = {"Long Long", 6, 14};
//     free_throws team = {"Throwgoods", 0, 0};

//     free_throws dup;
//     // без инициализации

//     set_pc(one);
//     display(one);
//     accumulate(team, one);
//     display(team);

//     // Использование возвращаемого значения в качестве аргумента

//     display(accumulate(team, two));
//     // accumulate(accumulate(team, three), four); // not const
//     accumulate(team, three);
//     accumulate(team, four);        // with const
//     display(team);
    
//     // Использование возвращаемого значения в присваивании

//     dup = accumulate(team, five);
//     std::cout << "dispaying team\n";
//     display(team);

//     // Отображение dup после присваивания

//     std::cout << "Displaying dup after assignment:\n";
//     display(dup);
//     set_pc(four);
    
//     // Отображение dup после неблагоразумного присваивания
//     // accumulate(dup, five) = four;
//     std::cout << "Displaying dup after ill-advised assignment:\n";
//     display(dup);

//     return 0;
// }
// void display(const free_throws & ft)
// {
//     std::cout << "Name: " << ft.name << std::endl;
//     std::cout << "Made:" << ft.made << '\t';
//     std::cout << "Attemps: " << ft.attemps << '\t';
//     std::cout << "Percent: " << ft.percent << std::endl;
// }
// void set_pc(free_throws & ft)
// {
//     if (ft.attemps != 0)
//     {
//         ft.percent = 100.0f * float(ft.made) / float(ft.attemps);
//     }
//     else
//     {
//         ft.percent = 0;
//     }
// }
// const free_throws & accumulate(free_throws & target, const free_throws & source)
// {
//     target.attemps += source.attemps;
//     target.made += source.made;
//     set_pc(target);
//     return target;
// }

// 8.7
// std::string version1(const std::string & s1, const std::string & s2);
// const std::string & version2(std::string & s1, const std::string & s2);
// const std::string & version3(std::string & s1, const std::string & s2);
// int main()
// {
//     std::string input, copy, rezult;
//     std::cout << "Enter a string: ";
//     getline(std::cin, input);
//     copy = input;
//     std::cout << "Your string as entered: " << input << std::endl;
//     rezult = version1(input, "***");
//     std::cout << "Your string enhanced: " << rezult << std::endl;
//     std::cout << "Your original string: " << input << std::endl;
//     rezult = version2(input, "###");
//     std::cout << "Your string enhanced: " << rezult << std::endl;
//     std::cout << "Your original string: " << input << std::endl;
//     std::cout << "Resetting original string.\n";
//     input = copy;
//     rezult = version3(input, "&&*&&*&");
//     std::cout << "Your string enhanced: " << rezult << std::endl;
//     std::cout << "Your original string: " << input << std::endl;
//     return 0;
// }
// std::string version1(const std::string & s1, const std::string & s2)
// {
//     std::string temp;
//     temp = s2 + s1 + s2;
//     return temp;
// }
// const std::string & version2(std::string & s1, const std::string & s2)
// {
//     s1 = s2 + s1 + s2;
//     return s1;
// }
// const std::string & version3(std::string & s1, const std::string & s2)
// {
//     std::string temp;
//     temp = s2 + s1 + s2;
//     return temp;
// }
void file_it(std::ostream & oc, double fo, const double fe[], int n);
const int LIMIT = 5;
int main()
{
    std::ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open())
    {
        std::cout << "Can't open " << fn << ", Bye!\n";
        exit(EXIT_FAILURE);
    }
    double objective;
    std::cout << "Enter the focal length of your "
                "telescope objective in mm: ";
    // Ввод фокусного расстояния объектива телескопа в мм
    std::cin >> objective;
    double eps[LIMIT];
    // Ввод фокусного расстояния окуляров в мм
    std::cout << "Enter the focal lengths, in mm, of " << LIMIT << "eyepieces:\n";
    for (int i = 0; i < LIMIT; i++)
    {
        std::cout << "Eyepiece #" << i + 1 << ": ";
        std::cin >> eps[i];
    }
    file_it(fout, objective, eps, LIMIT);
    file_it(std::cout, objective, eps, LIMIT);
    std::cout << "Done!\n";
    return 0;
}
void file_it(std::ostream & os, double fo, const double fe[], int n)
{
    std::ios_base::fmtflags initial;
    initial = os.setf(std::ios_base::fixed);
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm\n";
    os.setf(std::ios::showpoint);
    os.precision(1);
    os.width(12);
    os << "f.l. eyepiece";
    os.width(15);
    os << "magnification" << std::endl;
    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << std::endl;
    }
    os.setf(initial);
}