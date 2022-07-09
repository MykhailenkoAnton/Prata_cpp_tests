#include <valarray>
#include <vector>
#include <iostream>
void Show(int n) {std::cout << n << " ";}
int main()
{
    // std::valarray<double> vad1(10), vad2(10), vad3(10);
    // vad1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // vad2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    // vad3 = vad1 + vad2;

    // for (int i = 0; i < 10; i++)
    // {
    //     std::cout << vad3[i] << ' ';
    // }


    



    // vad3 = 10.0* ((vadl + vad2) / 2.0 + vadl * cos(vad2));
    

    std::vector<double> vad1(10), vad2(10), vad3(10);
    vad3.push_back(1);
    vad1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vad2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    std::for_each(vad3.begin(), vad3.end(), [&vad1, &vad2](const auto &item){
        item = 10.0* ((vad1 + vad2) / 2.0 + vad1 * cos(vad2));
    });



    // std::transform(vad1.begin(), vad1.end(), vad2.begin(), vad3.begin(), std::plus<double>());
    // // std::transform(vad3.begin(), vad3.end(), );
    // std::for_each(vad3.begin(), vad3.end(), Show);
    return 0;
}