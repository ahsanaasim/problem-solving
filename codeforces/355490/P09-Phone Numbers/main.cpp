// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P09
#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    string temp;
    cin >> n;
    cin >> s;
    int count = 0;
    int eights = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '8')
        {
            eights += 1;
        }
        else
        {
            temp += s[i];
        }
    }
    int x = s.length() / 11;

    if (eights >= x)
        count = x;
    else
        count = eights;

    cout << count;

    puts("");
    return 0;
}