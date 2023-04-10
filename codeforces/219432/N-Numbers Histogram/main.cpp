// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N
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
    string s = "";
    int n = 0;
    cin >> s >> n;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        draw(s, input);
        cout << endl;
    }
}

int main()
{
    check();
    puts("");
    return 0;
}