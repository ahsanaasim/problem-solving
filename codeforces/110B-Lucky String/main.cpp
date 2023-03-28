// https://codeforces.com/contest/110/problem/B
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (1)
    {
        if (n == 0)
            break;

        cout << "a";
        n--;

        if (n == 0)
            break;

        cout << "b";
        n--;

        if (n == 0)
            break;

        cout << "c";
        n--;

        if (n == 0)
            break;

        cout << "d";
        n--;
    }

    puts("");
}