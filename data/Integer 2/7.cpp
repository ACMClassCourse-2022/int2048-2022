/*
Time: 2021-10-21
Test: operator == != < > <= >= 
std Time: 0.01s
Time Limit: 1.00s
*/

#include "int2048.hpp"
#include <vector>

std::vector<sjtu::int2048> v;

int main()
{
    v.push_back(sjtu::int2048("19260817192608171926081719260817192608171926081719260817192608171926081719260817"));
    v.push_back(v[0]);
    v.push_back(v[0] + 1);
    v.push_back(v[0] - 1);
    v.push_back(v[0] * 10);
    v.push_back(v[0] / 10);
    v.push_back(v[0] * 10000000000000000ll);
    v.push_back(v[0] / 10000000000000000ll);
    v.push_back(v[0] * 114514);
    v.push_back(v[0] / 114514);
    for (int i = 0; i < 10; i++)
        v.push_back(0 - v[i]);

    v.push_back(0);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            std::cout << v[i] << " == " << v[j] << " is " << (v[i] == v[j]) << '\n';
            std::cout << v[i] << " != " << v[j] << " is " << (v[i] != v[j]) << '\n';
            std::cout << v[i] << " < " << v[j] << " is " << (v[i] < v[j]) << '\n';
            std::cout << v[i] << " > " << v[j] << " is " << (v[i] > v[j]) << '\n';
            std::cout << v[i] << " <= " << v[j] << " is " << (v[i] <= v[j]) << '\n';
            std::cout << v[i] << " >= " << v[j] << " is " << (v[i] >= v[j]) << '\n';
        }
    }
}