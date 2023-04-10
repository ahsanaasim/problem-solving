// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
#include <iostream>
#include <cstring>
using namespace std;

void check()
{
    int input = 0;
    while (1)
    {
        cin >> input;
        if (input == 1999)
        {
            cout << "Correct" << endl;
            break;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
}

int main()
{
    check();
    puts("");
    return 0;
}