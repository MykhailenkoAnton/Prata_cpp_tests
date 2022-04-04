// vegnews.срр — использование операций new и delete с классами
#include <iostream>
#include "stngbad.h"

void CallMe1(StngBad &);
void CallMe2(StngBad);

int main()
{
    using std::endl;
    {
        std::cout << "Starting an inner block.\n";
        StngBad headline1("Celery Stalks at Midnight");
        StngBad headline2("Lettuce Prey");
        StngBad sports("Spinach Leaves Bowl for Dollars");
        std::cout << "headline1: " << headline1 << endl;
        std::cout << "headline2: " << headline2 << endl;
        std::cout << "sports: " << sports << endl;
        CallMe1(headline1);
        std::cout << "headline1: " << headline1 << endl;
        CallMe2(headline2);
        std::cout << "headline2: " << headline2 << endl;
        std::cout << "Initialize one object to another:\n";
        StngBad sailor = sports;
        std::cout << "sailor: " << sailor << endl;
        std::cout << "Assign one object to another:\n";
        StngBad knot;
        knot = headline1;
        std::cout << "knot: " << knot << endl;
        std::cout << "Exiting the block.\n";
    }
    std::cout << "End of main()\n";
    return 0;
}
void CallMe1(StngBad & rsb)
{
    std::cout << "String passed by reference:\n"; // строка, переданная по ссылке
    std::cout << "\"" << rsb << "\"\n";
}
void CallMe2(StngBad sb)
{
    std::cout << "String passed by value:\n"; // строка, переданная по значению
    std::cout << "\"" << sb << "\"\n";
}