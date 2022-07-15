#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char * argv[])
{
    std::ifstream fin1(argv[1]);
    std::ofstream fout(argv[2], std::ios::out | std::ios::app);
    char ch;
    char f1[20];
    int i = 0;
    if (!fin1.is_open())
    {
        std::cout << "Cant open file 1\n";
        exit(EXIT_FAILURE);
    }
    else
    {
        std::cout << "Here are the current contents of the "
                << argv[1] << " file:\n";
        while (fin1.get(ch))
        {
            std::cout << ch;
            f1[i] = ch;
            i++;
        }
        fin1.close();
        f1[i] = '\0';
    }
    std::cout << std::endl;
    if (!fout.is_open())
    {
        std::cout << "Cant open file 2\n";
        exit(EXIT_FAILURE);
    }
    else
    {
        fout << std::endl;
        for (int k = 0; k < i; k++)
        {
            fout << f1[k];
        }
        fout.close();
    }
    std::cout << std::endl;

    
    return 0;
}