// https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P15
#include <iostream>
using namespace std;

bool isLucky(int n)
{
    while (n > 0)
    {
        int r = n % 10;
        if (r != 4 && r != 7)
            return false;
        n = n / 10;
    }
    return true;
}

void mainCode(int n)
{
    if (isLucky(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        bool isAlmostLucky = false;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                if (isLucky(n / i))
                {
                    isAlmostLucky = true;
                    break;
                }
            }
        }
        if (isAlmostLucky)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    int n = 10;
    cin >> n;
    mainCode(n);
    return 0;
}