// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L
#include <iostream>
#include <cmath>
using namespace std;

// https://lemire.me/blog/2013/12/26/fastest-way-to-compute-the-greatest-common-divisor/
unsigned int gcd(unsigned int u, unsigned int v)
{
    int shift;
    if (u == 0)
        return v;
    if (v == 0)
        return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do
    {
        unsigned m;
        v >>= __builtin_ctz(v);
        v -= u;
        m = (int)v >> 31;
        u += v & m;
        v = (v + m) ^ m;
    } while (v != 0);
    return u << shift;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    puts("");
    return 0;
}