#include <iostream>
#include <string>

class apple
{
public:
    apple(int w, std::string c) : weight(w), color(c) {
        count++;
        id = count;
    }
    int getId() { return id; }
    static int GetCount() { return count;}
private:
    static int count;
    int weight;
    std::string color;
    int id;
};
int apple::count = 0;
int main()
{
    apple a1(100, "Y");
    apple a2(222, "G");
    apple a3(333, "R");

    // std::cout << a1.getId() << std::endl;
    // std::cout << a2.getId() << std::endl;]

    std::cout << apple::GetCount() << std::endl;

    std::cout << a1.GetCount() << std::endl;


    return 0;
}