// https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P23
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

const int N = 999999;
int divisors[N] = {0};

void optimizeIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int getNumberOfDivisors(int n)
{
    int cnt = 1;
    for (int p = 2; p * p <= n; p++)
    {
        if (n % p == 0)
        {
            int exp = 0;
            while (n % p == 0)
            {
                n /= p;
                exp++;
            }
            cnt *= (exp + 1);
        }
    }
    if (n > 1)
        cnt *= 2;
    return cnt;
}

void check(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += getNumberOfDivisors(i);
    }
    cout << total << endl;
}

void init()
{
    optimizeIO();
    memset(divisors, 0, sizeof(divisors));
    // precompute 50% Divisors
    for (int i = 0; i <= N / 2; i++)
    {
        divisors[i] = getNumberOfDivisors(i);
    }
}

int main()
{
    init();
    int n = 99999;
    cin >> n;

    check(n);
    // check(573851);
    // check(10123);
    // check(185);
    // check(140000);
    puts("");
    return 0;
}