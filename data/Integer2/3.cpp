/*
Time: 2021-10-20
Test: add & minus (unsigned)
std Time: 0.13s
Time Limit: 1.00s
*/

#include "int2048.h"

sjtu::int2048 a, b;

int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        std::cin >> a >> b;
        std::cout << a - b << '\n';
        std::cout << (a -= b) << '\n';

        sjtu::int2048 tmp;
        tmp = a + b;
        a += b;
        a -= a;
        a += b;
        tmp -= a;
        std::cout << tmp << '\n';
    }
}