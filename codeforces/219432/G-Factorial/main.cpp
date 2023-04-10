// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include <iostream>
using namespace std;

long long factorial(long long num)
{
    if (num > 1)
        return num * factorial(num - 1);
    else
        return 1;
}

void check(int n)
{
    for (int i = 0; i < n; i++)
    {
        long long input = 0;
        cin >> input;
        cout << factorial(input) << endl;
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