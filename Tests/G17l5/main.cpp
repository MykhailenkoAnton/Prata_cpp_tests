#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

void Show(std::string & s) {
    std::cout << s << std::endl;
}

const char * file1 = "mat.txt";
const char * file2 = "pat.txt";
const char * file3 = "matpat.txt";

int main()
{
    std::string name;
    std::ifstream fin1(file1, std::ios::in);
    std::ifstream fin2(file2, std::ios::in);
    std::ofstream fout(file3);
    std::vector<std::string> v1, v2;

    if (fin1.is_open())
    {
        while (!fin1.eof())
        {
            getline(fin1, name);
            v1.push_back(name);
        }
    }
    else
    {
        std::cout << "Error 1\n";
        exit(EXIT_FAILURE);
    }

    if (fin2.is_open())
    {
        while (!fin2.eof())
        {
            getline(fin2, name);
            v2.push_back(name);
        }
    }
    else
    {
        std::cout << "Error 2\n";
        exit(EXIT_FAILURE);
    }
    std::sort(v1.begin(), v1.end());
    std::for_each(v1.begin(), v1.end(), Show);

    std::cout << std::endl;
    
    std::sort(v2.begin(), v2.end());
    std::for_each(v2.begin(), v2.end(), Show);


    v1.insert(v1.end(), v2.begin(), v2.end());
    std::sort(v1.begin(), v1.end());
    std::cout << std::endl;

    auto last = std::unique(v1.begin(), v1.end());
    v1.erase(last, v1.end());
    std::for_each(v1.begin(), v1.end(), Show);

    int size = v1.size();

    if (fout.is_open())
    {
        for (int i = 0; i < size; i++)
        {
            fout << v1[i];
            fout << std::endl;
        }
    }
    return 0;
}