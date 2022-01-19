#include <iostream>
#include <cstring>
#include <cstdlib>
template <typename T>
T maxn(T * ar, int n);

template <> 
char maxn(char *, int);

int main()
{
    char * ch[3] = {
        {"hello"},
        {"why"},
        {"beautifull"}
    };
    
    int num[6] = {1, 2, 4, 5, 6, 4};
    std::cout << maxn(num, 6) << std::endl;
    double nums[4] = {2.5, 3.5, 14.5, 8.0};
    std::cout << maxn(nums, 4) << std::endl;
    std::cout << maxn(ch, 3) << std::endl;
    return 0;
}
template <typename T>
T maxn(T * ar, int n)
{
    T max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    return max;
}
template <>
char maxn(char * ar, int n)
{   
    char * biggest[n];
    char * big = biggest[0];
    for (int i = 0; i < n; i++)
    {
        if (strlen(big) < strlen(biggest[i]))
        {
            *big = *(biggest[i]);
        }
        
    }
    return *big;
}