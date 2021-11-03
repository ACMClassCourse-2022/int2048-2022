/*
Time: 2021-10-20
Test: add & minus (signed)
std Time: 0.14s
Time Limit: 1.00s
*/

#include "int2048.hpp"

sjtu::int2048 a;
std::string s;

int main()
{
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> s;
        if (i & 1)
            a += s;
        else
            a -= s;
        
        std::cout << a << '\n';
    }
}