// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
#include <iostream>
#include <cmath>
using namespace std;

void check()
{
    int a, b;
    while (1)
    {
        cin >> a >> b;
        if (b > a)
        {
            a ^= b;
            b ^= a;
            a ^= b;
        }

        if (a <= 0 || b <= 0)
        {
            break;
        }
        int sum = 0;
        for (int i =b; i <= a; i++) {
            sum+=i;
            cout << i << " ";
        }

        cout << "sum =" << sum << endl;
    }
}

int main()
{
    check();
    puts("");
    return 0;
}