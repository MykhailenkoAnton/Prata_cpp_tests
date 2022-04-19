#include <iostream>
#include <string>
#include <new>

const int BUF = 512;

class JustTesting
{
private:
    std::string words;
    int number;
public:
    JustTesting(const std::string & s = "JustTesting", int n = 0){words = s; number = n; std::cout << words << " constructed\n";}
    ~JustTesting(){std::cout << words << " destroyed\n";}
    void Show() const{std::cout << words << ", " << number << std::endl;}
};

int main()
{
    char * buffer = new char[BUF];
    JustTesting *pc1, *pc2;
    pc1 = new(buffer) JustTesting; // размещение объекта в buffer
    pc2 = new JustTesting("Heap1", 20); // размещение объекта в куче
    std::cout << "Memory block addresses:\n" << "buffer: " << (void *) buffer << " heap: " << pc2 << std::endl; // вывод адресов памяти
    std::cout << "Memory contents:\n"; // вывод содержимого памяти
    std::cout << pc1 << ": ";
    pc1->Show();
    std::cout << pc2 << ": ";
    pc2->Show();
    JustTesting *pc3, *pc4;
    pc3 = new(buffer) JustTesting("bad idea", 6);
    pc4 = new JustTesting("Heap2", 10);
    std::cout << "Memory contents:\n"; // вывод содержимого памяти
    std::cout << pc3 << ": ";
    pc3->Show();
    std::cout << pc4 << ": ";
    pc4->Show();
    delete pc2; // освобождение Heap1
    delete pc4; // освобождение Неар2
    delete [] buffer;
    std::cout << "Done!\n";
    return 0;
}