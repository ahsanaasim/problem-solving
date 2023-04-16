// https://codeforces.com/contest/1/problem/B
#include <iostream>
#include <regex>
#include <sstream>
using namespace std;

const int N = 999999;
string alph[N] = {"", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
string cols[N] = {""};

bool isFirstPattern(string str)
{
    regex pattern("^R\\d+C\\d+$");
    if (regex_match(str, pattern))
        return true;

    return false;
}

void optimizeIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

string convertColumn(string c)
{
    // c.erase(0, 1);
    // cout << c << endl;
    int col = stoi(c);
    // cout << col << endl;
    // cout << "numbers: " << col / 26 << endl;
    // int numbers = (col - 1) / 26;
    string res = "";
    int tempCol = col;
    int remainder = 0;
    while (tempCol > 0)
    {
        remainder = tempCol % 26;
        tempCol = tempCol / 26;
        if (remainder == 0)
        {
            res += "Z";
            tempCol--;
        }
        else
        {
            res += alph[remainder];
        }
    }

    int n = res.length();
    for (int i = 0; i < n / 2; i++)
    {
        char temp = res[i];
        res[i] = res[n - i - 1];
        res[n - i - 1] = temp;
    }

    // reverse(res.begin(), res.end());
    // reverseStr(res, res.length() - 1, 0);
    return res;
}

string convertColumnNumber(string c)
{
    string row = "";
    int col = 0;
    for (int i = 0; i < c.size(); i++)
    {

        if (!isdigit(c[i]))
        {
            // cout <<c[i] << ":" << "int:" <<  int(c[i]) - 64 << endl;
            string s(1, c[i]);
            col *= 26;
            col += int(c[i]) - 64;
        }
        else
        {
            row += c[i];
        }
    }
    return "R" + row + "C" + to_string(col);
    // cout << "R" << row << "C" << col << endl;
    // return col;
}

void check(string str)
{
    if (isFirstPattern(str))
    {
        int index = str.find("C");
        string col = str.substr(index + 1);
        string row = str.substr(1, index - 1);
        string resCol = "";
        // cout << resCol << row << endl;
        if (cols[index] != "")
        {
            resCol = cols[index];
        }
        else
        {
            resCol = convertColumn(col);
        }
        cout << resCol << row << endl;
    }
    else
    {
        cout << convertColumnNumber(str) << endl;
    }
}

void init()
{
    for (int index = 55; index <= 999999; index++)
    {
        string col = to_string(index);
        string resCol = convertColumn(col);
        cols[index] = resCol;
    }
}

int main()
{
    optimizeIO();
    init();

    int n = 0;
    cin >> n;
    string s;

    while (n--)
    {
        cin >> s;
        check(s);
    }

    // check("R23C55");
    // check("A1");

    // cout << isFirstPattern("C494") << endl;
    // cout << isFirstPattern("R23C55") << endl;
    // cout << isFirstPattern("R228C494") << endl;

    // check("R23C55");
    // check("R228C494");
    // check("BC23");
    // check("BC23");
    // cout << "\n"
    //      << findIndexOfAlph("Z");
    // check("R23C55");

    // convertColumn("C55");
    // convertColumn("C494");
    // convertColumn("C1");
    // convertColumn("C10");

    puts("");
    return 0;
}