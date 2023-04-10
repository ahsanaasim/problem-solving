// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include <iostream>
#include <cstring>
using namespace std;

void check(int n)
{
    int input;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input > temp)
            temp = input;
    }

    cout << temp << endl;
}

int main()
{
    int n = 99999;
    cin >> n;
    check(n);
    puts("");
    return 0;
}