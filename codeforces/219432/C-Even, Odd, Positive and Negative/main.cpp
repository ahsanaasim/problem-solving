// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include <iostream>
#include <cstring>
using namespace std;

void check(int n)
{
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    int input;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input == 0)
            even++;
        else
        {
            if (input % 2 == 0)
                even++;
            else
                odd++;
        }
        if (input > 0)
        {
            positive++;
        }
        else if (input < 0)
        {
            negative++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}

int main()
{
    int n = 99;
    cin >> n;
    check(n);
    puts("");
    return 0;
}