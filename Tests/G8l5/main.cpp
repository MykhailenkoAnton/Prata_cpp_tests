#include <iostream>
template <typename T>
T max(T * ar);
int main()
{
    int num[5] = {2, 4, 6, 8, 3};
    std::cout << max(num) << std::endl;
    double nums[5] = {4.6, 3.5, 223.4, 67.2, 100.2};
    std::cout << max(nums) << std::endl;
    return 0;
}
template <typename T>
T max(T * ar)
{
    T max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    return max;
}