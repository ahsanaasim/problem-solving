// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F
#include <iostream>
using namespace std;

int count_trailing_zeros(long long num)
{
    int count = 0;
    while (num > 0 && (num & 1) == 0)
    {
        num >>= 1; // equivalent to num /= 2
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int max_f = 0;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        int f = count_trailing_zeros(x);
        if (f > max_f)
        {
            max_f = f;
        }
    }
    cout << max_f << endl;
    return 0;
}