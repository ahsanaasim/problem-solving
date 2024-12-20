#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve(int n)
{
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int countSuperPrimes(int n)
{
    vector<bool> is_prime = sieve(n);
    int count = 0;

    for (int p = 5; p <= n; p++)
    {
        if (is_prime[p] && is_prime[p - 2])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << countSuperPrimes(n) << endl;
    return 0;
}