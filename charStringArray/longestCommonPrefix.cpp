#include <iostream>
using namespace std;
string longestCommonPre(string s[], int n)
{
    string ans;
    int count = 0;
    string y = s[0];
    for (int i = 0; i < y.length(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (y[i] == s[j][i])
            {
                count++;
            }
        }
        if (count == n)
        {
            ans.push_back(y[i]);
        }
        else{
            break;
        }
        count = 0;
    }
    if (ans.length()==0)
    {
        return "no common prefix";
    }
    else{
    return ans;
    }
}
int main(int argc, char const *argv[])
{
    string s[] = {"flower", "flow", "floew"};
    string ansS =longestCommonPre(s, 3);
    string s1[] = {"ayush", "malviya", "ashu"};
    string ansS1 = longestCommonPre(s1, 3);
   cout<<ansS<<endl;
   cout<<ansS1<<endl;
    return 0;
}
