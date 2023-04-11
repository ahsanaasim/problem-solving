// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B
#include <iostream>
using namespace std;

void check(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((n - i - 1 == i) && (j == n / 2))
            {
                cout << "X";
            }
            else if (j == i)
            {
                cout << "\\";
            }
            else if (j == n - i - 1)
            {
                cout << "/";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 0;
    cin >> n;
    check(n);
    // check(5);
    // check(49);
    puts("");
    return 0;
}