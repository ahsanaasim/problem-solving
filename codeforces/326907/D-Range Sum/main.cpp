// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
#include <iostream>
using namespace std;

long long getSum(long long r, long long l)
{
    long long sumR = (r * (r + 1)) / 2;
    long long sumL = (l * (l - 1)) / 2;
    return sumR - sumL;
}

void check(int t, long long *l, long long *r)
{
    for (int i = 0; i < t; i++)
    {
        if (r[i] > l[i])
            cout << getSum(r[i], l[i]) << endl;
        else
            cout << getSum(l[i], r[i]) << endl;
    }
}

int main()
{
    int t = 99;

    // cout << getSum(641009859, 54748096) << endl;

    cin >> t;
    long long r[t];
    long long l[t];

    for (int i = 0; i < t; i++)
    {
        cin >> l[i];
        cin >> r[i];
    }

    check(t, l, r);

    puts("");
    return 0;
}