// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
#include <iostream>
#include <cmath>
using namespace std;

void draw(string s, int count, int spaces)
{
    for (int j = 0; j < spaces; j++)
    {
        cout << " ";
    }
    for (int j = 0; j < count; j++)
    {
        cout << s;
    }
}

void check()
{
    string s = "*";
    int n = 0;
    int count = 1;
    cin >> n;
    int t = n - 1;
    for (int i = 1; i <= n; i++)
    {
        draw(s, count, t--);
        count += 2;
        cout << endl;
    }
}

int main()
{
    check();
    puts("");
    return 0;
}