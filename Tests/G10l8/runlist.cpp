#include <string>
#include <iostream>
#include "list.h"

void change_IT(items & ITS)
{
    ITS += "!!!";
}

int main()
{
    List LS;
    std::string str[4] =
    {
        "Hello",
        "Vanya",
        "Why",
        "ROS"
    };
    for (int i = 0; i < 4; i++)
    {
        if (LS.isFull())
        {
            std::cout << "LS is full\n";
        }
        else
        {
            LS.add(str[i]);
        }
    }
    LS.show();

    LS.visit(change_IT);

    LS.show();


    List LS1;
    std::string namen;
    if (LS1.isEmpty())
    {
        for (int i = 0; i < 4; i++)
        {
            getline(std::cin, namen);
            LS1.add(namen);
        }
    }
    std::cout << std::endl;
    LS1.show();
    LS1.visit(change_IT);
    LS1.show();
    return 0;
}
