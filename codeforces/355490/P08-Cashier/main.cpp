// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P08
#include <iostream>
using namespace std;

int main()
{
    int n = 0, a = 0, L = 0, cur = 0, count = 0;
    cin >> n >> L >> a;

    int t[n + 1], l[n + 1];

    for (int i = 1; i <= n; i++)
        cin >> t[i] >> l[i];

    for (int i = 1; i <= n; i++)
    {
        count = count + (t[i] - cur) / a;
        cur = t[i] + l[i];
    }

    count = count + (L - cur) / a;
    cout << count << endl;
}