// https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P23
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

const int N = 999999;
bool prime[N];
int divisors[N];

int getNumberOfDivisors(int n)
{
    int temp = n;
    if (divisors[n] != 0)
    {
        return divisors[n];
    }

    int total = 1;
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            int count = 0;
            if (n % p == 0)
            {
                while (n % p == 0)
                {
                    n = n / p;
                    count++;
                }
                total = total * (count + 1);
            }
        }
    }
    divisors[temp] = total;
    return total;
}

void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                prime[j] = false;
            }
        }
        getNumberOfDivisors(i);
    }
}

void check(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += getNumberOfDivisors(i);
    }
    cout << total;
}

int main()
{
    sieve();
    int n = 99999;
    // cin >> n;

    // check(n);
    // check(185);
    check(573851);
    // check(10123);
    // check(140000);
    puts("");
    return 0;
}