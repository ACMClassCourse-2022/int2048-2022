/*
Time: 2021-10-21
Test: mul & div 
std Time: 0.03s
Time Limit: 1.00s
*/

#include "int2048.hpp"

sjtu::int2048 a, b;

int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        std::cin >> a >> b;
        std::cout << a / b << '\n';
        std::cout << (a /= b) << '\n';

        sjtu::int2048 tmp;
        tmp = a * b;
        a *= b;
        a /= a;
        a *= b;
        tmp /= a;
        std::cout << tmp << '\n';
    }
}