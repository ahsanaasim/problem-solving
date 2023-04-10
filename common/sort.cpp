// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include <iostream>
#include <cmath>
using namespace std;

void sortValues(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void check(int n)
{
    int arr[n];
    int count = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                arr[count++] = i;

            else
            {
                arr[count++] = i;
                arr[count++] = n / i;
            }
        }
    }

    sortValues(arr, count);

    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n = 99;
    cin >> n;
    check(n);
    puts("");
    return 0;
}