// https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P24
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

const int N = 1000000;
bool isTPrime[N + 1];

void sieve()
{
    // initialize all numbers as T-primes
    memset(isTPrime, true, sizeof(isTPrime));
    isTPrime[0] = isTPrime[1] = false;
    // mark non-T-primes
    for (int i = 2; i * i <= N; i++)
    {
        if (isTPrime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                isTPrime[j] = false;
            }
        }
    }
}

void optimizeIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void check(int n)
{
    for (int i = 0; i < n; i++)
    {
        long long input;
        cin >> input;
        long long sqrt_x = sqrt(input);
        if (sqrt_x * sqrt_x == input && isTPrime[sqrt_x])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

void init()
{
    optimizeIO();
    sieve();
}

int main()
{
    init();
    int n = 99999;
    cin >> n;
    check(n);
    puts("");
    return 0;
}