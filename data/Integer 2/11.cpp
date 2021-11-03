/*
Time: 2021-10-21
Test: add & minus & mul & div
std Time: 0.02s
Time Limit: 1.00s
*/

#include "int2048.hpp"

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
        
        if (ty == 0)
            a += s;
        else if (ty == 1)
            a -= s;
        else if (ty == 2)
            a *= s;
        else 
            a /= s;
        
        std::cout << a << '\n';
    }
}