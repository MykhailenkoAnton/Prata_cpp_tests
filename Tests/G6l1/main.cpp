#include <iostream>

int main()
{
    const char x[2] [20] = ("Jason ","at your service\n");
    const char * у = "Quillstone ";
    for (int i = 0; i < 3; i++)
    std::cout << ((i < 2) ? !i ? x[i] : у : x[1]);
    return 0;
}
