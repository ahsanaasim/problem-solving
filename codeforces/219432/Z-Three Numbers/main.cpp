// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z
#include <iostream>
using namespace std;

void optimizeIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void check()
{
    int k, s, x = 0;
    cin >> k >> s;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (s - i - j >= 0 && s - i - j <= k)
                x++;
        }
    }
    cout << x << endl;
}

int main()
{
    optimizeIO();
    check();
    puts("");
    return 0;
}