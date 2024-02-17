#include <iostream>
using namespace std;
string expandAround(string a, int i, int j)
{
    string ans  ;
    int count = 0;
    while (i>=0 && j < a.length())
    {
        if (a[i]==a[j])
        {
            if (a.substr(i,j-i+1).length()> ans.length())
            {
                ans = a.substr(i,j-i+1);
                i--;
                j++;
            }
             
            
        }
        else{
             break;
        }
       
    }
    
    return ans;
}
string longestPalendromicSubstr(string s)
{
    string largest;
    for (int i = 0; i < s.length(); i++)
    {
        string ans = expandAround(s, i, i);
        if (ans.length() > largest.length())
        {
            largest = ans;
        }
        ans = expandAround(s, i, i + 1);
        if (ans.length() > largest.length())
        {
            largest = ans;
        }
    }
    return largest;
}
int main()
{
    string s = "ababbaba";
    cout << longestPalendromicSubstr(s)<<endl;
}