// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
#include <iostream>
#include <cstring>
using namespace std;

void printDigits(string n)
{
    int size = n.size() - 1;
    while (size >= 0)
    {
        cout << n[size] << " ";
        size--;
    }
    cout << endl;
}

void check(long long n)
{
    string input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        printDigits(input);
    }
}

int main()
{
    int n = 99999;
    cin >> n;
    check(n);
    puts("");
    return 0;
}