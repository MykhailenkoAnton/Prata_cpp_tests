#include <iostream>
#include <string>
#include <cstring>
struct box
{
char maker[40];
float height;
float width;
float length;
float volume;
};
void show_box(box b);
double sum(box s);
box in(box in);
// void show_and_go(box * b);
int main()
{
    box bx = in(bx);
   
    
    std::cout << std::endl;
    std::cout << std::endl;
    show_box(bx);
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "All structr sum has: ";
    std::cout << sum(bx) << std::endl;
    // show_and_go(&bx);


    return 0;
}
void show_box(box b)
{
    std::cout << "You entered: ";
    std::cout << b.maker << " ";
    std::cout << b.height << " ";
    std::cout << b.width << " ";
    std::cout << b.length << " ";   
    std::cout << b.volume << " \n";
}
// void show_and_go(box * b)
// {
//     std::cout << b->maker << " is ";
//     b->height = b->volume;
//     b->length = b->volume;
//     b->width = b->volume;

//     std::cout << b->height << " ";
//     std::cout << b->width << " ";
//     std::cout << b->length << " ";
//     std::cout << b->volume << " ";
// }
double sum(box s)
{
    double total = 0;
    total = s.height + s.length + s.volume + s.width;
    return total;
}
box in(box in)
{
    box ar;
    
    std::cin.getline(ar.maker, 40);
    
    std::cin >> ar.height;
    
    std::cin >> ar.width;
    
    std::cin >> ar.length;
    
    std::cin >> ar.volume;
    
    return ar;

}