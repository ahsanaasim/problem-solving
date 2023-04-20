// https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P31
#include <iostream>
#include <algorithm>
using namespace std;

void check(string s1, string s2)
{

    int n = s1.size(), m = s2.size();

    if (m < n)
    {
        cout << "NO" << endl;
        return;
    }

    sort(s1.begin(), s1.end());
    bool found = false;

    for (int i = 0; i <= m - n; i++)
    {
        string sub = s2.substr(i, n);
        sort(sub.begin(), sub.end());
        if (sub == s1)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return;
}

void optimizeIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    optimizeIO();
    int n = 1;
    string s1 = "onetwothree";
    string s2 = "threetwoone";
    cin >> n;
    while (n > 0)
    {
        n--;
        cin >> s1 >> s2;
        check(s1, s2);
    }

    // check("abacaba", "zyxaabcaabkjh");

    // check("one", "zzonneyy");
    // check("one", "none");
    // check("twenty", "ten");
    puts("");
    return 0;
}