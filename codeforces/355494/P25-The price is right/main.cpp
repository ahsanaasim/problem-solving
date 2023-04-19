// https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P25
#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    cin >> n;
    int a[n];

    int min = 9999999;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (min > a[i])
        {
            min = a[i];
            index = i;
        }
    }
    cout << index << endl;
    return 0;
}