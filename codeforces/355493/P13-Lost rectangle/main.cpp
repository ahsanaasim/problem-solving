// https://codeforces.com/group/yg7WhsFsAp/contest/355493/problem/P13
using namespace std;
#include <iostream>

int main()
{
    long long int x;
    cin >> x;
    long long int perimeter = 1e18;

    // for loop that iterates from 1 to the square root of x.
    for (int i = 1; 1ll * i * i <= x; i++)
    {
        if (x % i == 0)
        {
            // variable with the minimum sum of factors found so far.
            perimeter = min(perimeter, i + x / i);
        }
    }
    cout << 2 * perimeter;
    return 0;
}