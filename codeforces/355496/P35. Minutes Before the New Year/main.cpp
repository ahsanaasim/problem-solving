https://codeforces.com/group/yg7WhsFsAp/contest/355496/problem/P35
#include <iostream>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int h, m;
        cin >> h >> m;

        const int totalMinutes = 1440;

        int elapsed = h * 60 + m;

        int remaining = totalMinutes - elapsed;

        cout << remaining << endl;
    }
}

int main()
{
    solve();
    return 0;
}
