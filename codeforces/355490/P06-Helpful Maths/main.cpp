// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P06
#include <iostream>
#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

vector<string> split(string const &s, char delim)
{
    vector<string> result;
    istringstream iss(s);

    for (string token; getline(iss, token, delim);)
    {
        result.push_back(move(token));
    }

    return result;
}

void sortValues(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    string s;
    cin >> s;

    vector<string> arr = split(s, '+');
    int n[arr.size()];

    for (int i = 0; i < arr.size(); i++)
    {
        n[i] = stoi(arr[i]);
    }

    sortValues(n, arr.size());

    string result = "";
    for (int i = 0; i < arr.size(); i++)
    {
        result += to_string(n[i]);
        if (i < arr.size() - 1)
            result += "+";
    }
    cout << result;

    puts("");
    return 0;
}