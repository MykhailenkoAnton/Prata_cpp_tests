#include <iostream>
#include <string>
struct donat
{
    std::string name;
    double sum;
};
int main()
{
    int amount;
    std::cout << "enter amount mecenate: ";
    std::cin >> amount;
    donat * dn = new donat[amount];
    int count = 1;

    for (int i = 0; i < amount; i++)
    {
        std::cin.get();
        std::cout << "Enter please " << count << " mecenate name: ";
        getline(std::cin, dn[i].name);
        std::cout << "Enter please " << count << " mecenate sum donat: ";
        std::cin >> dn[i].sum;
        count++;
    }
    
    std::cout << "Grand Patrons:\n";
    double sum = 0;
    for(int j = 0; j < amount; j++)
    {
        if (dn[j].sum >= 10000)
        {
            std::cout << dn[j].sum << " was donats by " << dn[j].name << std::endl;
            sum += dn[j].sum;
        }
        
    }
    if (sum == 0)
        {
            std::cout << "none\n";
        }
    std::cout << "PAtrons:\n";
    double suma = 0;
    for (int k = 0; k < amount; k++)
    {
        
        if(dn[k].sum < 10000)
        {
            std::cout << dn[k].sum << " was donats by " << dn[k].name << std::endl;
            suma += dn[k].sum;
        }  
    }
    if (suma == 0)
        {
            std::cout << "none\n";
        }

    delete [] dn;
    return 0;
}