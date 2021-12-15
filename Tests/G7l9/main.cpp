#include <iostream>
#include <cstdlib>
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(student * pt);
void display3(const student pa[], int n);
int main()
{
    std::cout << "Enter a class size: ";
    int class_size;
    std::cin >> class_size;
    while (std::cin.get() != '\n')
    {
        continue;
    }

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    std::cout << entered << std::endl;

    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        // std::cout << std::endl;
        // display2(&ptr_stu[i]);
        
    }
    // display3(ptr_stu, entered);

    delete [] ptr_stu;
    return 0;
}
int getinfo(student pa[], int n)
{
    int count_stud = 0;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter please strudents name: ";
        std::cin.getline(pa[i].fullname, SLEN);
        if (pa[i].fullname[0] == '\0')
        {
            break;
        }
        std::cout << "Enter please strudents hobby: ";
        std::cin.getline(pa[i].hobby, SLEN);

        std::cout << "Enter please students oolevel: ";
        std::cin >> pa[i].ooplevel;

        std::cin.get();
        count_stud++;
    }
    
    return count_stud;
}
void display1(student st)
{
    std::cout << "Name: " << st.fullname << std::endl;
    std::cout << "Hobby: " << st.hobby << std::endl;
    std::cout << "ooleve: " << st.ooplevel << std::endl;
}
// void display2(student * pt)
// {
//     std::cout << "Name: " << pt->fullname << std::endl;
//     std::cout << "Hobby: " << pt->hobby << std::endl;
//     std::cout << "ooleve: " << pt->ooplevel << std::endl;
// }
// void display3(const student pa[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << pa[i].fullname << std::endl;
//         std::cout << pa[i].hobby << std::endl;
//         std::cout << pa[i].ooplevel << std::endl;
//     }
    
// }