// https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/B
#include <iostream>
#include <string>
using namespace std;

string cipher = "aieos";
string cipherCode = "41305";

int indexOfChar(char c)
{
    int index = cipher.find(c);

    if (index != string::npos)
    {
        return index;
    }
    else
    {
        return -1;
    }
}

int main()
{
    string input = "aeios", output = "";
    cin >> input;
    for (int i = 0; i < input.size(); i++)
    {
        int index = indexOfChar(input[i]);
        // cout << index << endl;
        if (index >= 0)
        {
            output += cipherCode[index];
        }
        else
        {
            output += input[i];
        }
    }
    cout << output << endl;
    return 0;
}