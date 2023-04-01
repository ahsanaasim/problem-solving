// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P07
// toupper

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    string temp;
    cin >> s;
// xnhcigytnqcmy
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {
            temp += '.';
            temp += s[i];
        }
    }

    cout << temp;

    puts("");
    return 0;
}