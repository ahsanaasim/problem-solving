// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
#include <iostream>
using namespace std;

void check(int n)
{
    int res = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << res << " ";
            res++;
        }
        cout << "PUM" << endl;
        res++;
    }
    
}

int main()
{
    int n = 0;
    cin >> n;
    check(n);
    // check(7);
    // cout << endl;
    // cout << endl;
    // check(3);
    puts("");
    return 0;
}