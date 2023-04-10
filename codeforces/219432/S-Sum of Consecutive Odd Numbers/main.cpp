// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
#include <iostream>
#include <cmath>
using namespace std;

long long getSumOfOdds(long long a, long long b)
{
    long long sum = 0;
    for (int i = a + 1; i < b; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
}

void check(int n)
{
    long long a, b;
    while (n > 0)
    {
        cin >> a >> b;
        if (b < a)
        {
            a ^= b;
            b ^= a;
            a ^= b;
        }
        cout << getSumOfOdds(a, b) << endl;
        n--;
    }
}

int main()
{
    int n;
    cin >> n;
    check(n);
    puts("");
    return 0;
}