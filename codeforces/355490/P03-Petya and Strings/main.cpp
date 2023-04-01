// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P04
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1, s2;

    cin >> s1 >> s2;

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (int(toupper(s1[i])) > int(toupper(s2[i])))
        {
            sum1 = 1;
            break;
        }
        else if (int(toupper(s1[i])) < int(toupper(s2[i])))
        {
            sum2 = 1;
            break;
        }
    }
    if (sum1 == sum2)
    {
        cout << 0;
    }
    else if (sum1 < sum2)
        cout << -1;
    else
        cout << 1;

    puts("");
    return 0;
}