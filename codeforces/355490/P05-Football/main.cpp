// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P05
#include <iostream>
using namespace std;

int main()
{
    string s;

    cin >> s;
    int sum = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (sum == 7)
        {
            break;
        }
        if (s[i - 1] == s[i])
        {
            sum += 1;
        }
        else
        {
            sum = 1;
        }
    }
    if (sum >= 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    puts("");
    return 0;
}