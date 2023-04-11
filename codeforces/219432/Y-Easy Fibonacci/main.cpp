// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
#include <iostream>
using namespace std;

const int N = 999999;
int prime[N] = {0};

long long fibonacci(long long num)
{
    if (prime[num] != 0)
        return prime[num];
    if (num > 2)
    {
        prime[num] = fibonacci(num - 2) + fibonacci(num - 1);
        return prime[num];
    }
    else if (num == 2)
        return 1;
    else
        return 0;
}

void check(int n)
{
    for (int i = 1; i <= n; i++)
        cout << fibonacci(i) << " ";
}

int main()
{
    int n = 99;
    cin >> n;
    check(n);
    // check(7);
    puts("");
    return 0;
}