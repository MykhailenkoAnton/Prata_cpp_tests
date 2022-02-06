#include <iostream>
#include <string>
#include "person.h"
int main()
{
    // person one;
    person two("hello", "word");
    two.FormalShow();
    two.Show();
    person three("WTF");
    three.Show();
    three.FormalShow();
    return 0;
}