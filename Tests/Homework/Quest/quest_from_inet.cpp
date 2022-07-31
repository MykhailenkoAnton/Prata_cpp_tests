#include <iostream>
class A
{
public:
A() {}
~A(){}
void Show() {std::cout << "A\n";}
};
class B : public A

{
public:
    B() {}
    ~B() {}
    void Show() {std::cout << "B\n";}
};



void Foo(A b);
int main()
{
    A b;
    Foo(b);
    return 0;
}

void Foo(A b)
{
    b.Show();
}