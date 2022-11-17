/*
Time: 2021-10-20
Test: add & minus (signed)
std Time: 0.16s
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

        std::cout << a + b << '\n' << a - b << '\n';

        std::cout << (a -= b) << '\n';
        std::cout << (a += b) << '\n';

        std::cout << (a + b) - (a - b) << '\n';
        b += a;
        b += b;
        b -= a + (a - b);
        std::cout << b << '\n';
    }
}