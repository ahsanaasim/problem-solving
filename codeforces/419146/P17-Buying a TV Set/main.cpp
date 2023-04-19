// https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P17
#include <iostream>
#include <cmath>
using namespace std;

void optimizeIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

long long gcd(long long a, long long b)
{
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    while (b != 0)
    {
        a %= b;
        if (a == 0)
            return b;
        b %= a;
    }
    return a;
}

signed main()
{
    optimizeIO();
    long long a, b, x, y;
    cin >> a >> b >> x >> y;
    long long g = gcd(x, y);
    x /= g;
    y /= g;
    long long ans = min(a / x, b / y);
    cout << ans << endl;
    return 0;
}