#include <iostream>
#include <iomanip>

// int main()
// {
//     std::cout << "Enter an integer: ";
//     int n;
//     std::cin >> n;
//     std::cout << std::setw(15) << "base ten" << std::setw(15) << "base sixteen" << std::setw(15) << "base eight" << "\n";
//     std::cout << std::showbase;
//     std::cout << std::setw(15) << n << std::setw(15) << std::hex << n << std::setw(15) << std::oct << n << "\n";
//     return 0;
// }


int main()
{
    using namespace std;
    char name[20];
    float hourly;
    float hours;
    cout << "Enter your name: ";
    cin.get(name, 20).get();
    cout << "Enter your hourly wages: ";
    cin >> hourly;
    cout << "Enter number of hours worked: ";
    cin >> hours;

    // cout.setf(ios::showpoint);
    // cout.setf(ios::fixed, ios::adjustfield);
    // cout.setf(ios::right, ios::adjustfield);

    cout << showpoint << fixed << right;
    cout << "First format:\n";
    cout << setw(30) << name << ": $" << setprecision(2)
        << setw(10) << hourly << ": $" << setprecision(1)
        << setw(5) << hours << "\n";
    cout << left;
    cout << "Second format:\n";
    cout << setw(30) << name << ": $" << setprecision(2)
        << setw(10) << hourly << ": $" << setprecision(1)
        << setw(5) << hours << "\n";
    return 0;
}