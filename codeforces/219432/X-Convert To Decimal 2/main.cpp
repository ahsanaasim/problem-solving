// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
#include <iostream>
#include <cmath>
using namespace std;

void optimizeIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void check()
{
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, c = 0;
        long long sum = 0;
        cin >> n;
        while (n > 0)
        {
            if (n % 2 == 1)
                c++;
            n = n / 2;
        }
        for (int j = 0; j < c; j++)
        {
            sum += pow(2, j);
        }
        cout << sum << endl;
    }
}

int main()
{
    optimizeIO();
    check();
    puts("");
    return 0;
}