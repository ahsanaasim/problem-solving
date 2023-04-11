// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
#include <iostream>
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

void check(int n)
{
    string s = "*";
    int count = 1;
    int t = n - 1;
    for (int i = 1; i <= n; i++)
    {
        draw(s, count, t--);
        count += 2;
        cout << endl;
    }
    t = 0;
    count -= 2;
    for (int i = n; i >= 1; i--)
    {
        draw(s, count, t++);
        count -= 2;
        cout << endl;
    }
}

int main()
{
    int n = 0;
    cin >> n;
    check(n);
    // check(4);
    puts("");
    return 0;
}