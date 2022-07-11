#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
typedef std::vector<std::string> MyList;
void ShowList(const std::string & l1);
void SetName(MyList & l2);

int main()
{

    MyList one, two, three;
    std::cout << "Enter Matt guest list: (quit to QUIT)\n";
    SetName(one);
    std::cout << "Matt guests:\n";
    std::sort(one.begin(), one.end());
    std::for_each(one.begin(), one.end(), ShowList);

    std::cout << std::endl;

    std::cout << "Enter Pett guest list: (quit to QUIT)\n";
    SetName(two);
    std::cout << "Pett guests:\n";
    std::sort(two.begin(), two.end());
    std::for_each(two.begin(), two.end(), ShowList);

    std::cout << std::endl;

    std::cout << "All guests:\n";
    three.insert(three.begin(), one.begin(), one.end());
    three.insert(three.end(), two.begin(), two.end());
    std::sort(three.begin(), three.end());
    auto last = std::unique(three.begin(), three.end());
    three.erase(last, three.end());
    std::for_each(three.begin(), three.end(), ShowList);
    return 0;
}

void ShowList(const std::string & l1)
{
    std::cout << "\"" << l1 << "\"" << " ";
}

void SetName(MyList & l)
{
    std::string name;
    while (getline(std::cin, name) && name != "quit")
    {
        l.push_back(name);
    }
}
