#include <iostream>

int main()
{
    double stavka;
    
    // std::cin >> stavka;
    while (std::cin >> stavka && stavka > 0)
    {
        if (stavka <= 5000)
        {
            std::cout << "U nalog is 0%, u have " << 0 << " nalog\n";
        }
        else if (stavka > 5000 && stavka <= 15000)
        {
            
            std::cout << "U nalog is 10%, u have " << stavka * 0.10 << " nalog!\n";
        }
        else if (stavka > 15000 && stavka <= 35000)
        {
            
            std::cout << "U nalog is 15%, u have " << stavka * 0.15 << " nalog\n";
        }
        else
        {
            int more = stavka - 35000;
            stavka = 5000 * 0.0 + 10000 * 0.10 + 20000 * 0.15 + more * 0.20;
            std::cout << "U nalog is 20%, u have " << stavka << " nalog\n";
        }
        // std::cin >> stavka;
    }
    return 0;
}