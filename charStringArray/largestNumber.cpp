#include <iostream>
#include <vector>
using namespace std;
int bigger(int a, int b)
{
    string x = to_string(a), y = to_string(b);
    int i = 1;
    while (x.length() != 0 && y.length() != 0)
    {
        if (x[i] > y[i])
        {
            return a;
        }
        else if (x[i] < y[i])
        {
            return b;
        }
        i++;
    }
}
string largestCombination(vector<int> a)
{

    vector<string> ab(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        ab[i] = to_string(a[i]);
    }
    int length = 0;
    for (int i = 0; i < ab.size(); i++)
    {
        for (int j = 0; j < ab[i].size(); j++)
        {
            length++;
        }
    }

    int i = 0;
    string ans;
    int index;

    while (ans.length() < length)
    {
        int max = -1;

        for (int element = 0; element < ab.size(); element++)
        {
            if ((ab[element][i] - 48) > max)
            {
                max = ab[element][i] - 48;
                index = element;
            }
            else if ((ab[element][i] - 48) == max)
            {
                max = bigger(max, (ab[element][i] - 48));
                index = element;
            }
        }
        
        
        ans += ab[index];
        if (ans[0]=='0')
        {
            return "0";
        }
        ab.erase(ab.begin() + index);
    }
    return ans;
}
int main()
{
    vector<int> a = {998, 3, 30, 34, 5, 9, 11, 0};
    vector<int> b = {0, 0, 0, 0, 0,1,90,0,0};
    vector<int> c = {0, 0, 0, 0, 0};

    cout << largestCombination(a) << endl;
    cout << largestCombination(b) << endl;
    cout << largestCombination(c) << endl;
    // cout<<bigger(91,989);
    // i don't know how i am feeling proud to myself i know the logic but couldn't code this for almost 3-4 hours now i got this done
    return 0;
}