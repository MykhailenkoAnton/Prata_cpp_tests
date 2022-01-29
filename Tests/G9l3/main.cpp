#include <iostream>
#include <new>
#include <cstring>
const int BUF = 512;
struct shaff
{
    char dross[20];
    int slag;
};
void getShaff(shaff &, const char *, int);
void showStaff(shaff &);
char buffer[BUF];
// int main()
// {
//     shaff * pd;
//     pd = new(buffer)shaff[2];
  //  // for (int i = 0; i < 2; i++)
  //  // {
  //  //     std::cout << "Enter please dross: ";   // можно так, можно записывать в автоматические переменные и потом с помощью функции в цинке присваивать значение
  //  //     std::cin.getline(pd[i].dross, 20);
  //  //     std::cout << "Enrer please slag: ";
  //  //     std::cin >> pd[i].slag;
  //  //     std::cin.get();
  //  // }
//     getShaff(pd, "Ron Weslay", 80);
//     getShaff(pd + 1, "harry potter", 90);
//     showStaff(pd);
//     return 0;
// }
// void getShaff(shaff * s, const char * c, int n)
// {
//     // int Max = strlen(c);
//     // const char * str = new char[Max + 1];
//     // strcpy(str, c);
//     for (int i = 0; i < 2; i++)
//     {
//         strcpy(s[i].dross, c);
//         s[i].slag = n;
//     }
// }
// void showStaff(shaff * sh)
// {
//     for (int i = 0; i < 2; i++)
//     {
//         std::cout << sh[i].dross << " " << sh[i].slag << std::endl;
//     }
    
// }



// or

int main()
{
    shaff * SHF;
    SHF = new(buffer)shaff[2];
    char name[20];
    int num = 0;
    for (int i = 0; i < 2; i++)
    {
        std::cout << "Enter a name: ";
        std::cin.getline(name, 20);
        std::cout << "Enter a num: ";
        std::cin >> num;
        std::cin.get();
        getShaff(SHF[i], name, num);
    }
    for (int i = 0; i < 2; i++)
    {
        showStaff(SHF[i]);
    }
    
    return 0;
}
void getShaff(shaff & s, const char * c, int n)
{
    strcpy(s.dross, c);
    s.slag = n;
}
void showStaff(shaff & ss)
{
    std::cout << ss.dross << " " << ss.slag << std::endl;
}