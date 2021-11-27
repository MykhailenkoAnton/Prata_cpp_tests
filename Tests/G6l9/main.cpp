#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
struct donat
{
    std::string name;
    double sum;
};

int main()
{
    std::ifstream fin;
    fin.open("donats.txt");

    int mecenate;
    fin >> mecenate;
    std::cout << "How mecenate?\n";
    std::cout << mecenate << std::endl;
    donat * dn = new donat[mecenate];
    int i = 0;
    double c_sum = 0;

    if (!fin.is_open())
    {
        std::cout << "No file\n";
        std::cout << "Terminated!\n";
        exit(EXIT_FAILURE);
    }
    while (fin.good())
    {
        fin.get();
        getline(fin, dn[i].name);
        fin >> dn[i].sum;
        c_sum += dn[i].sum;
        i++;
    }
    if (fin.eof())
    {
        std::cout << "end of file!\n";
    }
    else if (fin.fail())
    {
        std::cout << "Input terminated by data mismatch.\n";
    }
    else
    {
        std::cout << "unknown\n";
    }
    if (c_sum == 0)
    {
        std::cout << "No data\n";
    }
    else
    {
        double sum_a = 0;
        double sum_b = 0;
        std::cout << "Grand patrons:\n";
        for (int i = 0; i < mecenate; i++)
        {
            if(dn[i].sum > 10000)
            {
                std::cout << dn[i].name << " donats " << dn[i].sum << std::endl;
                sum_a += dn[i].sum;
            }
        }
        if (sum_a == 0)
        {
            std::cout << "none!\n";
        }
        std::cout << "Patrons:\n";
        for (int j = 0; j < mecenate; j++)
        {
            if(dn[j].sum < 10000)
            {
                std::cout << dn[j].name << " donats " << dn[j].sum << std::endl;
                sum_b += dn[j].sum;
            }
        }
        if (sum_b == 0)
        {
            std::cout << "none!\n";
        }
    }
    
    


    fin.close();
    delete [] dn;
    return 0;
}