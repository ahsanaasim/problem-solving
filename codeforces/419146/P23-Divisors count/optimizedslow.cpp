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
    if (divisors[n] != 0)
        return divisors[n];

    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
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