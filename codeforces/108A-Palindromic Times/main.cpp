// https://codeforces.com/problemset/problem/108/A
#include <cstdio>
#include <iostream>
#include <vector>
#include <sstream>
#include<iomanip>
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

int main()
{
    string input;
    int hh, mm;
    cin >> input;
    vector<string> arr = split(input, ':');
    hh = stoi(arr[0]);
    mm = stoi(arr[1]);

    do
    {
        ++mm;
        if (mm == 60)
        {
            ++hh;
            mm = 0;
        }
        if (hh == 24)
        {
            hh = 0;
        }
    } while (hh % 10 * 10 + hh / 10 != mm);
    cout << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm;
    puts("");
    return 0;
}