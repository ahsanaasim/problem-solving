// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A
#include <iostream>
using namespace std;

void optimizeIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void mainCode(long long a, long long b)
{
    if (a - b >= 0)
        cout << a - b;
    else
        cout << 0;
}

int main()
{
    optimizeIO();
    long long a, b;
    cin >> a >> b;
    mainCode(a, b);
    // mainCode(9, 1);
    // mainCode(1, 9);
    puts("");
    return 0;
}