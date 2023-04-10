// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F
#include <iostream>
#include <cstring>
        using namespace std;

void printLine(int i, int n)
{
    cout << n << " * " << i << " = " << (i * n) << endl;
}

void check(int n)
{
    for (int i = 1; i <= 12; i++)
    {
        printLine(i, n);
    }
}

int main()
{
    int n = 99999;
    cin >> n;
    check(n);
    puts("");
    return 0;
}