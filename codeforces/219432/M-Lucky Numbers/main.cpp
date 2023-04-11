// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
#include <iostream>
using namespace std;

void optimizeIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool isLucky(int n)
{
    while (n > 0)
    {
        int r = n % 10;
        if (r != 4 && r != 7)
            return false;
        n = n / 10;
    }
    return true;
}

void mainCode(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (isLucky(i))
        {
            cout << i << " ";
            count++;
        }
    }
    if (count == 0)
    {
        cout << -1 << " ";
    }
}

int main()
{
    optimizeIO();
    int a, b;
    cin >> a >> b;
    mainCode(a, b);
    // mainCode(4, 20);
    // mainCode(8, 15);
    puts("");
    return 0;
}