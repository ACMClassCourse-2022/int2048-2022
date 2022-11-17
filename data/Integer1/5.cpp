/*
Time: 2021-10-20
Test: add & minus (signed)
std Time: 0.15s
Time Limit: 1.00s
*/

#include "int2048.h"

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
            a.add(sjtu::int2048(s));
        else
            a.minus(sjtu::int2048(s));
        
        a.print(); puts("");
    }
}