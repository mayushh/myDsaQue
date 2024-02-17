#include <iostream>
using namespace std;
#include <cmath>
int convertToInt2(string s)
{
    int num = 0, sign = 1, i = 0;
    while (s[i] == ' ')
    {
        i++;
    }
    if ((s[i] == '+' || s[i] == '-') && i < s.size())
    {
        sign = s[i] == '+' ? 1 : -1;
        i++;
    }
    while (i < s.length() && isdigit(s[i]))
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    return num * sign;
}
int convertToInt(string a)
{
    int ans = 0;
    bool negative = false;
    int i = 0;
    for (; i < a.size(); i++)
    {
        if (a[i] == ' ')
        {
            i++;
        }
        else if (a[i] == '-')
        {
            negative = true;
        }
        else
        {
            break;
        }
    }

    for (; i < a.length(); i++)
    {
        if (!isdigit(a[i]))
        {
            break;
        }
        for (int j = 0; j < 9; j++)
        {

            if (a[i] - '0' == j)
            {
                ans = ans * 10 + j;
                break;
            }
        }
    }
    if (negative)
    {
        ans = ans * -1;
    }

    return ans;
}

int main()
{
    string s = "-12332";
    // convert this string to integer;
    // already we have a function that converts string to integer but do it without that function
    // cout<<stoi(s);
    string s2 = "00124-53";
    string s3 = "00-124-53";
    cout << convertToInt(s) << endl;
    cout << convertToInt2(s) << endl;
    cout << convertToInt(s2) << endl;
    cout << convertToInt2(s2) << endl;
    cout << convertToInt(s3) << endl;
    cout << convertToInt2(s3) << endl;
}