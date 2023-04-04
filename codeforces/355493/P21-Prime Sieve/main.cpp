// https://codeforces.com/group/yg7WhsFsAp/contest/355493/problem/P21
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

const int N = 10000000;
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

int main()
{
    sieve();
    int n = 56000;
    cin >> n;
    int count = 0;
    int i = 0;
    int lastPrime = 0;
    int primes[n];

    while (lastPrime <= n)
    {
        if (prime[i])
        {

            lastPrime = i;
            primes[count] = lastPrime;
            // cout << lastPrime << " ";
            count++;
        }
        i++;
    }
    cout << count - 1 << endl;
    for (int j = 0; j < count - 1; j++)
    {
        cout << primes[j] << " ";
    }
    puts("");
    return 0;
}