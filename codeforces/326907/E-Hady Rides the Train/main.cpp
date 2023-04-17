// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long seat = 0;
    cin >> seat;

    long long row = floor(seat / 4.0);

    long long remainder = seat - (row * 4);

    // cout << row << ": " << (remainder) << endl;
    if (remainder < 0)
    {
        while (remainder < 0)
        {
            row--;
            remainder += 4;
        }
    } else if (remainder > 3) {
        while (remainder > 3)
        {
            row++;
            remainder -= 4;
        }
    }

    if (row != 0)
    {
        if (row % 2 != 0)
        {
            // cout << remainder << endl;
            remainder = 4 - remainder - 1;
            // cout << remainder << endl;
        }
    }
    cout << row << " " << (remainder) << endl;
    puts("");
    return 0;
}