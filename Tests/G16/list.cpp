#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>

// void outin(int n) {std:: cout << n << " ";} 

// int main()
// {
//     std::list<int>one(5, 2); // список из 5 двоек
//     int stuff[5] = {1, 2, 4, 8, 6};
//     std::list<int>two;
//     two.insert(two.begin(), stuff, stuff + 5);
//     int more[6] = {6, 4, 2, 4, 6, 5};
//     std::list<int>three(two);
//     three.insert(three.end(), more, more + 6);

//     std::cout << "List one: ";
//     std::for_each(one.begin(), one.end(), outin);
//     std::cout << std::endl;
//     std::cout << "List two: ";
//     std::for_each(two.begin(), two.end(), outin);
//     std::cout << std::endl;
//     std::cout << "List three: ";
//     std::for_each(three.begin(), three.end(), outin);
//     // std::cout << std::endl;
//     three.remove(2);
//     std::cout << std::endl << "List three minus 2s: " ;
//                 // вычитание второго списка из третьего
//     std::for_each(three.begin(), three.end(), outin);
//     three.splice(three.begin(), one);
//     std::cout << std::endl << "List three after splice: "; // третий список после splice()
//     std::for_each(three.begin(), three.end(), outin);
//     std::cout << std::endl << "List one: " ;
//     std::for_each(one.begin(), one.end(), outin);
//     three.unique();
//     std::for_each(three.begin(), three.end(), outin); // третий список после unique()
//     three.sort();
//     three.unique();
//     std::cout << std::endl << "List three after sort & unique: ";
//                             // третий список после sort() и unique()
//     std::for_each(three.begin(), three.end(), outin);
//     two.sort();
//     three.merge(two);
//     std::cout << std::endl << "Sorted two merged into three: ";
//                     // слияние отсортированного второго списка с третьим
//     std::for_each(three.begin(), three.end(), outin);
//     std::cout << std::endl;
//     return 0;
// }

void outint(int n) {std::cout << n << " ";}
int main ()
{

    // список из 5 двоек
    // первый список
    // второй список
    // третий список
    using namespace std;
    list<int> one (5, 2);
    int stuff[5] = {1,2,4,8, 6};
    list<int> two;
    two.insert(two.begin(),stuff, stuff + 5 );
    int more[6] = {6, 4, 2, 4, 6, 5};
    list<int> three(two);
    three.insert(three.end() , more, more + 6) ;
    cout << "List one: ";
    for_each(one.begin(),one.end(), outint);
    cout << endl << "List two: ";
    std::for_each(two.begin (), two.end(), outint);
    cout << endl << "List three: ";
    std::for_each(three.begin(), three.end(), outint);
    three.remove(2);
    cout << endl << "List three minus 2s: " ;
    // вычитание второго списка из третьего
    for_each(three.begin (), three.end(), outint);
    three.splice(three.begin(), one) ;
    cout << endl << "List three after splice: ";
    for_each(three.begin (), three.end(), outint);
    cout << endl << "List one: " ;
    for_each(one.begin (), one.end(), outint);
    three.unique();
    cout << endl << "List three after unique: ";
    for_each(three.begin (), three.end(), outint);
    three.sort ();
    three.unique ();
    cout << endl << "List three after sort & unique: ";
    // третий список после sort() и unique()
    for_each(three.begin(), three.end(), outint);
    two.sort();
    three.merge(two) ;
    cout << endl << "Sorted two merged into three: ";
    // слияние отсортированного второго списка с третьим
    for_each(three.begin() , three.end(), outint);
    cout << endl;
    return 0;
}                          

// третий список после splice()
// третий список после unique()