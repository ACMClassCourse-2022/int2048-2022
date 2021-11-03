/*
Time: 2021-10-22
Test: complexity (div) 
Comment: Bonus of A Class
std Time: 1.12s
Time Limit: 3.00s
*/

#include "int2048.hpp"

sjtu::int2048 a, b;
std::string s1, s2;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        a = 0, b = 0;
        s1 = "", s2 = "";
        for (int j = 1; j < 500000; j++)
            s1 += (1ll * (i + j) * 19260817) % 998244353 % 10 + '0';
        for (int j = 1; j < 500000 / 2; j++)
            s2 += (1ll * (i + j) * 998244353) % 19260817 % 10 + '0';
        a = s1; b = s2;
        b = b + 1;

        std::cout << a / b << '\n';
    }
}