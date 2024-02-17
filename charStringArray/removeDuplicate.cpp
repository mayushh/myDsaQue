#include <iostream>
#include <string.h>
using namespace std;
string removeDup(string s)
{
    string ans = "";
    int i = 0;
    while (i < s.length())
    {

        if (ans.length() > 0 && ans[ans.length() - 1] == s[i])
        {
            ans.pop_back();
        }

        else
        {
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
    // 0123456
    // acda
}
int main(int argc, char const *argv[])
{
    string str = "abbada";
    cout << removeDup(str);
    return 0;
}
