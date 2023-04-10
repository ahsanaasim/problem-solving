// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

const int N = 999999;
bool prime[N];

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
    }
}

void check(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (prime[i])
            cout << i << " ";
    }
}

int main()
{
    sieve();
    int n;
    cin >> n;
    check(n);
    puts("");
    return 0;
}