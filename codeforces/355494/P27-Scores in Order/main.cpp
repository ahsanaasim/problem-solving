// https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P24
#include <iostream>
using namespace std;

void sort(int n, int *a)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[min_idx])
            {
                min_idx = j;
            }
        }
        swap(a[i], a[min_idx]);
    }
}

int main()
{
    int n = 6;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int temp = a[i];
        sort(i + 1, a);
        int index = i;

        for (int j = 0; j <= i; j++)
        {
            if (temp == a[j])
            {
                index = j;
                int kk = j + 1;
                while (temp == a[kk])
                {
                    index = kk;
                    kk++;
                }

                break;
            }
        }

        cout << index + 1 << endl;
    }

    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }
    cout << endl;
    return 0;
}