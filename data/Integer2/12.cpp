/*
Time: 2021-10-22
Test: complexity (add)
std Time: 0.31s
Time Limit: 2.00s
*/

#include "int2048.h"

sjtu::int2048 a, b;

int main()
{
    for (int j = 1; j <= 100; j++)
    {
        a = j; b = j + 1;
        for (int i = 1; i <= 4000; i++)
        {
            a += b;
            std::swap(a, b);
        }
        std::cout << a << ' ' << b << '\n';
    }
}