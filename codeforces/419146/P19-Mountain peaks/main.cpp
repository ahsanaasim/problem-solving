// https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P19
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    long long n = 1;
    cin >> n;
    long long h[n];
    bool ch[n];
    memset(ch, false, sizeof(ch));
    for (long long i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    long long cnt = 0;
    for (long long i = 1; i < n - 1; i++)
    {
        if (h[i] > h[i - 1] && h[i] > h[i + 1])
        {
            ch[i] = true;
            cnt++;
        }
    }

    if (cnt == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    for (long long k = n; k >= 1; k--)
    {
        if (n % k == 0)
        {
            long long items = n / k;
            // cout << "items: " << items << endl;
            long long x = 0;
            bool found = true;
            for (long long i = 0; i < k; i++)
            {
                // cout << "peaks: (";
                int hasChallange = 0;
                for (long long j = 0; j < items; j++)
                {

                    if (ch[x] == 1)
                    {
                        // cout << x << ": " << ch[x] << endl;
                        hasChallange = 1;
                    }
                    x++;
                }

                // cout << "hasChallange: " << hasChallange << endl;
                if (hasChallange != 1)
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                cout << k << endl;
                // cout << "found: " << k << endl;
                break;
            }
            else
            {
                // cout << "not found: " << k << endl;
            }
        }
    }

    puts("");
    return 0;
}
