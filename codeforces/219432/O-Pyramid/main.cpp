// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O
#include <iostream>
#include <cmath>
using namespace std;

void draw(string s, int count)
{
    for (int j = 0; j < count; j++)
    {
        cout << s;
    }
}

void check()
{
    string s = "*";
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        draw(s, i);
        cout << endl;
    }
}

int main()
{
    check();
    puts("");
    return 0;
}