// https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/F
#include <iostream>
using namespace std;

void sortDescending(long long freq[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (freq[j] > freq[maxIndex])
            {
                maxIndex = j;
            }
        }
        long long temp = freq[i];
        freq[i] = freq[maxIndex];
        freq[maxIndex] = temp;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    string cards;
    cin >> cards;

    long long freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[cards[i] - 'A']++;
    }

    sortDescending(freq, 26);

    long long max_score = 0;
    for (int i = 0; i < 26 && k > 0; i++)
    {
        if (freq[i] <= k)
        {
            max_score += freq[i] * freq[i];
            k -= freq[i];
        }
        else
        {
            max_score += (long long) k * k;
            k = 0;
        }
    }

    cout << max_score << endl;

    return 0;
}
