// https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/C
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

void solve()
{
    int n;
    cin >> n;

    long long sticks[n];

    // Read the stick lengths
    for (int i = 0; i < n; i++)
    {
        cin >> sticks[i];
    }

    // Step 1: Sort the stick lengths in descending order
    sortDescending(sticks, n);
    // 6 3 7 6 5 8 10
    // 10 8 7 6 6 5 3
    // 
    // Step 2: Find two pairs of the largest lengths
    long long maxArea = 0;
    long long first = 0, second = 0;
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (sticks[i] == sticks[i + 1])
        {
            if (first == 0)
            {
                first = sticks[i];
            }
            else
            {
                second = sticks[i];
                maxArea = first * second;
                break; // Stop once two pairs are found
            }
            i++; // Skip the next stick as it's already used in the pair
        }
    }

    // Step 3: Print the maximum area
    cout << maxArea << endl;
}

int main()
{
    solve();
    return 0;
}
