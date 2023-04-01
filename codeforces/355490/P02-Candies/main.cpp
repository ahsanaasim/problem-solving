// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P02
#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cin >> n;
    int c[n];

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int a, b;
    cin >> a >> b;

    int sum = 0;
    while (a != b+1)
    {
        sum += c[a];
        a++;
    }
    cout << sum;

    puts("");
    return 0;
}