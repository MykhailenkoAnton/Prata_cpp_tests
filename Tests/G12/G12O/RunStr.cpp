#include <iostream>
#include "StrngBad.h"

void callme1(StrngBad &);
void callme2(StrngBad);

int main()
{
    using namespace std;
    {
        cout << "Starting an inner block.\n";
        StrngBad headline1("Celery Stalks at Midnight");
        StrngBad headline2("Lettuce Prey");
        StrngBad sports("Spinach Leaves Bowl for Dollars");
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;
        callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        callme2(headline2);
        cout << "headline2: " << headline2 << endl;
        cout << "Initialize one object to another:\n";
        StrngBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";
        StrngBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";
    }
    cout << "End of main()\n";
    return 0;
}
void callme1(StrngBad & rsb)
{
    std::cout << "String passed by reference:\n"; // строка, переданная по ссылке
    std::cout << " \"" << rsb << "\"\n";
}
void callme2(StrngBad sb)
{
    std::cout << "String passed by value:\n"; // строка, переданная по значению
    std::cout << " \"" << sb << "\"\n";
}