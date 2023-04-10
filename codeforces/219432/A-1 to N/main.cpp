// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/A
#include <iostream>
using namespace std;

void check(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
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