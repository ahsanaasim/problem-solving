// https://codeforces.com/problemset/problem/749/A
// https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P18
#include <iostream>
using namespace std;

void mainCode(int n)
{
    if (n % 2 == 1)
    {
        n /= 2;
        n--;
        cout << n + 1 << endl
             << 3 << ' ';
    }
    else
    {
        n /= 2;
        cout << n << endl;
    }

    for (int i = 0; i < n; i++)
        cout << 2 << ' ';
    cout << endl;
    return;
}

int main()
{
    int n = 0;
    cin >> n;
    mainCode(n);
    puts("");
    return 0;
}