// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U
#include <iostream>
using namespace std;

string getString(char x)
{
    string s(1, x);
    return s;
}

int getSumOfDigits(string n)
{
    int sum = 0;
    int size = n.size() - 1;
    while (size >= 0)
    {
        // cout << n[size] << " ";
        sum += stoi(getString(n[size]));
        size--;
    }
    return sum;
}

void check(int n, int a, int b)
{
    int res = 0;

    for (int i = 1; i <= n; i++)
    {
        int sum = getSumOfDigits(to_string(i));
        if (sum >= a && sum <= b)
        {
            res += i;
            // cout << i << ": " << sum  << endl;
        }
    }
    cout << res << endl;
}

int main()
{
    int n = 0;
    int a = 0;
    int b = 0;
    cin >> n >> a >> b;
    check(n, a, b);
    // check(20, 2, 5);
    // check(10, 1, 2);
    // check(100, 4, 16);
    puts("");
    return 0;
}