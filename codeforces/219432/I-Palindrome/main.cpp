// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
#include <iostream>
#include <cstring>
using namespace std;

string removeZero(string str)
{
    int i = 0;
    while (str[i] == '0')
        i++;
    str.erase(0, i);
    return str;
}

void check(string n)
{
    int size = n.size() - 1;
    string temp = "";
    while (size >= 0)
    {
        temp += n[size];
        size--;
    }

    cout << removeZero(temp) << endl;
    if (n == removeZero(temp))
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    string n;
    cin >> n;
    check(n);
    puts("");
    return 0;
}