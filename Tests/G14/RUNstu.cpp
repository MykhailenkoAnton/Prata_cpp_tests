#include <iostream>
#include "student.h"

void set(Student & sa, int n);
const int pupils = 3;
const int quizzes = 5;

int main()
{
    Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};
    int i;
    for (i = 0; i < pupils; i++)
    {
        set(ada[i], quizzes);
    }
    std::cout << "\nStudent List:\n"; // вывод списка студентов
    for (i = 0; i < pupils; i++)
    {
        std::cout << ada[i].Name() << std::endl;
    }
    std::cout << "\nResults:";
    for (i = 0; i < pupils; i++)
    {
        std::cout << std::endl << ada[i];
        std::cout << "average: " << ada[i].Avarage() << std::endl;
    }
    std::cout << "Done.\n";
    return 0;
}
void set(Student & sa, int n)
{
    std::cout << "Please enter the student's name: "; // ввод имени студента
    getline(std::cin, sa);
    std::cout << "Please enter " << n << " quiz scores :\n"; // ввод оценок для студента
    for (int i = 0; i < n; i++)
    {
        std::cin >> sa[i];
    }
    while (std::cin.get() != '\n')
    {
        continue;
    }
}