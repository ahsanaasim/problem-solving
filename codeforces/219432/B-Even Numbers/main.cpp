// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
#include <iostream>
#include <cstring>
using namespace std;

void check(int n)
{
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
            count++;
        }
    }

    if (count == 0)
    {
        cout << -1 << endl;
    }
}

int main()
{
    int n = 99;
    cin >> n;
    check(n);
    puts("");
    return 0;
}