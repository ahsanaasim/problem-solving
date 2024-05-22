// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/G
#include <iostream>
using namespace std;

void findNumbers(long long n, long long s)
{
    if (n * (n + 1) / 2 < s)
    {
        cout << "-1" << endl;
    }
    else
    {
        long long res[n];
        long long sum = 0;
        long long index = 0;
        for (int i = n; i >= 1; i--)
        {
            if (sum + i <= s)
            {
                sum += i;
                res[index++] = i;
            }
            if (sum == s)
            {
                break;
            }
        }

        for (int i = 0; i < index; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    long long s, n;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> s;
        findNumbers(n, s);
    }
    return 0;
}