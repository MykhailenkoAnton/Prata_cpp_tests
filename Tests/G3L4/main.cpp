#include <iostream>
const int h_p_d = 24;
const int m_p_h = 60;
const int s_p_m = 60;

int main()
{
    std::cout << "Enter seconds: ";
    long second;
    std::cin >> second;
    double day = second / s_p_m / m_p_h / h_p_d; // day
    double hour = second / s_p_m / m_p_h % h_p_d; // hour
    double minuts = second / s_p_m % m_p_h; // minuts
    double sec = second % s_p_m; // sec

    std::cout << second << " sec = " << day << " day " << hour << " hour " << minuts << " min " << sec << " sec.\n";
    return 0;
}
