#include <iostream>
#include "emp.h"
// abstr_emp

abstr_emp::~abstr_emp()
{
}

void abstr_emp::ShowAll() const
{
    std::cout << "F name: " << fname << std::endl;
    std::cout << "L name: " << lname << std::endl;
    std::cout << "Job: " << job << std::endl;
}

void abstr_emp::SetAll()
{
    std::cout << "Enter please f name: ";
    getline(std::cin, fname);
    std::cout << "Enter please l name: ";
    getline(std::cin, lname);
    std::cout << "Enter please job: ";
    getline(std::cin, job);
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
    os << "Names: " << e.fname << ", " << e.lname << std::endl;
    return os;
}

// employee
void employee::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << std::endl;
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

//manager
void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "inchargeof: " << inchargeof << std::endl;
    std::cout << std::endl;
}

void manager::SetAll()
{
    std::cout << "Enter inchargeof: ";
    std::cin >> inchargeof;
    while (std::cin.get() != '\n')
    {
        continue;
    }
    
}

// fink
void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "reportsto: " << reportsto << std::endl;
    std::cout << std::endl;
}

void fink::SetAll()
{
    std::cout << "Enter reportsto: ";
    std::cin >> reportsto;
    while (std::cin.get() != '\n')
    {
        continue;
    }
}

// highfink
void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "inchargeof: " << InChargeOf() << std::endl;
    std::cout << "reportsto: " << ReportsTo() << std::endl;
    std::cout << std::endl;
}

void highfink::SetAll()
{
    abstr_emp::SetAll();
    manager::SetAll();
    fink::SetAll();
}



