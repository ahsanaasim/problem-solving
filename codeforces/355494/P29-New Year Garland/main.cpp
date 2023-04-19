// https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P29
#include <iostream>
using namespace std;

int partition(long long arr[], long long start, long long end)
{

    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(long long arr[], long long start, long long end)
{

    // base case
    if (start >= end)
        return;

    // partitioning the array
    int p = partition(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, end);
}

int main()
{
    int cs = 1;
    cin >> cs;

    while (cs != 0)
    {
        cs--;
        int n = 3;
        long long a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        quickSort(a, 0, n - 1);

        bool possible = true;

        a[2] = a[2] - a[1];

        a[2] = a[2] - a[0];

        if (a[2] > 1)
            possible = false;

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}