/*
Time: 2021-10-21
Test: operator=
std Time: 0.01s
Time Limit: 1.00s
*/

#include "int2048.hpp"

sjtu::int2048 f[2000], g[2000], h[2000];

int main()
{
    h[1] = (g[1] = f[1] = 1) + 233;
    for (int i = 2; i <= 1000; i++)
        h[i] = (g[i] = f[i] = f[i - 1] + f[i - 2]) + 233;
    
    for (int i = 1; i <= 1000; i++)
        std::cout << f[i] << '\n';

    for (int i = 1; i <= 1000; i++)
        std::cout << g[i] << '\n';

    for (int i = 1; i <= 1000; i++)
        std::cout << h[i] << '\n';
}