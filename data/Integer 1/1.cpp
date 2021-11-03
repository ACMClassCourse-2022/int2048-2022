/*
Time: 2021-10-20
Test: constructor & read & print
std Time: 0.00s
Time Limit: 1.00s
*/

#include "int2048.hpp"

int main()
{
    sjtu::int2048 a;
    a.print(); puts("");

    sjtu::int2048 b((long long)1145141919810);
    b.print(); puts("");
    sjtu::int2048((long long)-1145141919810).print(); puts("");

    sjtu::int2048 c("-2333333333333333333333333333333333333333333333333333333");
    c.print(); puts("");

    sjtu::int2048 d("19260817192608171926081719260817192608171926081719260817");
    d.print(); puts("");
    
    d.read("-2333333333333333333333333333333333333333333333333333333");
    d.print(); puts("");
    d.read("19260817192608171926081719260817192608171926081719260817");
    d.print(); puts("");

    sjtu::int2048("0").print(); puts("");
    sjtu::int2048("-0").print(); puts("");

    sjtu::int2048 e(d);
    e.print(); puts("");
}