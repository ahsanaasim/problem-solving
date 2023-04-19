// https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P28
#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }
        swap(a[i], a[min_idx]);
    }

    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }
    cout << endl;

    return 0;
}