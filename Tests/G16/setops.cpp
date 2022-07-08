#include <iostream>
#include <iterator>
#include <algorithm>
#include <string>
#include <set>

int main()
{
    const int N = 6;

    std::string s1[N] = {"buffoon", "thinkers", "for", "heavy", "can", "for"};
    std::string s2[N] = {"metal", "any", "food", "elegant", "deliver","for"};
    
    std::set<std::string> A(s1, s1 + N);
    std::set<std::string> B(s2, s2 + N);

    std::ostream_iterator<std::string, char> out(std::cout, " ");
    std::cout << "Set A: "; // набор А
    std::copy(A.begin(), A.end(), out);
    std::cout << std::endl;
    std::cout << "Set B: "; // набор B
    std::copy(B.begin(), B.end(), out);
    std::cout << std::endl;
    std::cout << "Union of A and B:\n"; // объединение А и В
    std::set_union(A.begin(), A.end(), B.begin(), B.end(), out);
    std::cout << std::endl;
    std::cout << "Intersection of A and B:\n"; // пересечение А и В
    std::set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
    std::cout << std::endl;
    std::cout << "Difference of A and B:\n"; // разность А и В
    std::set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
    std::cout << std::endl;

    std::set<std::string> C;
    std::cout << "Set C:\n";
    std::set_union(A.begin(), A.end(), B.begin(), B.end(), std::insert_iterator<std::set<std::string> > (C, C.begin()));
    std::copy(C.begin(), C.end(), out);
    std::cout << std::endl;
    std::string s3("grungy");
    C.insert(s3);
    std::cout << "Set C after insertion:\n"; // набор С после вставки
    std::copy(C.begin(), C.end(), out);
    std::cout << std::endl;
    std::cout << "Showing a range :\n"; // вывод диапазона
    std::copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
    std::cout << std::endl;
    return 0;
}