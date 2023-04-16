// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
#include <iostream>
#include <cmath>
using namespace std;

void check(int n, int k, long long *arr)
{
    int segments = ceil(n / (k * 1.0));
    int count = 0;
    for (int i = 0; i < segments; i++)
    {
        int min = 999999999;
        for (int j = 0; j < k; j++)
        {
            if (min > arr[count])
            {
                min = arr[count];
            }
            count++;
            if (count == n)
                break;
        }
        cout << min << " ";
        if (count == n)
            break;
    }
}

int main()
{
    int n = 99;
    int k = 99;
    cin >> n >> k;
    long long arr[n];

    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }

    check(n, k, arr);

    // int arr[8] = {4, -1, 2, 3, 5, 0, 2, 7};
    // check(8, 3, arr);
    // cout << endl;
    // check(8, 4, arr);

    // int arr[3] = {1, 2, 4};
    // check(3, 8, arr);

    puts("");
    return 0;
}