#include <iostream>
#include <vector>
#include <string.h>
#include<set>
using namespace std;

int expandAroundIndex(string s , int i, int j ){
    int count = 0;
    while (i<=0 && j>s.length() && s[i]==s[j])
    {
        count++;
        i--;
        j++;
        
    }
    return count;
    
}
int palindromeicSubstr2(string s){
    int count = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        int oddAns = expandAroundIndex(s, i, i);
        count = count + oddAns;
        int evenAns = expandAroundIndex(s, i, i+1);
        count = count + evenAns;
    }
    
}
bool palindromeCheck(string arr)
{
    int i = 0;
    int j = arr.length() - 1;
    while (j >= i)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }

        i++;
        j--;
    }
    return true;
}
int palindromicSubstr(string s)
{
    set <string> uniquePal;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 1; j < s.length() - i+1; j++)
        {
            string sub = s.substr(i, j);
            if (palindromeCheck(sub))
            {
                uniquePal.insert(sub);
            }
        }
    }
    return uniquePal.size();
}
int main()
{
    string in = "accd";
    // another solution by me, this is not a good solution cause time complexity is O of N cube
    cout << palindromicSubstr(in)<<endl;
    // or other way to do this
    // this solution is by lovebabbar which have time complexity is equal to O of N square
    cout<<palindromeicSubstr2(in);
    return 0;
}
