/*
Time: 2021-10-21
Test: mul & div
std Time: 0.01s
Time Limit: 1.00s
*/

#include "int2048.h"

sjtu::int2048 a;
std::string s;

int main()
{
    int n;
    std::cin >> n;
    a = 1;
    for (int i = 1; i <= n; i++)
    {
        int ty = 0;
        std::cin >> ty >> s;
        
        if (ty)
            a /= s;
        else
            a *= s;
        
        std::cout << a << '\n';
    }
}