// https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P20
#include <iostream>
using namespace std;

void optimizeIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void binarySearch(long long n, long long x)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        long long left = 1, right = n;
        while (left <= right)
        {
            long long mid = (left + right) / 2;
            if (i * mid == x)
            {
                count++;
                break;
            }
            else if (i * mid < x)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }

    cout << count << endl;
}

int main()
{
    optimizeIO();
    long long n, x;
    cin >> n >> x;
    binarySearch(n, x);

    // binarySearch(10, 5);
    // binarySearch(6, 12);
    // binarySearch(5, 13);

    return 0;
}
