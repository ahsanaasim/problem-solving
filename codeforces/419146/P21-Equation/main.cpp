// https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P21
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

void checkComposite(int n)
{
    int num1 = 0;
    int num2 = 0;
    int i = 3;
    while (i)
    {
        int index = i - 1;
        if (!prime[index])
        {
            int next = index + n;
            if (!prime[next])
            {
                num1 = index;
                num2 = next;
                break;
            }
        }
        i++;
    }

    cout << num2 << " " << num1 << endl;
}

int main()
{
    sieve();
    int n = 56000;
    cin >> n;
    checkComposite(n);
    puts("");
    return 0;
}