#include<iostream>
#include<vector>
using namespace std;
bool checkPalindrome(string s,int end,int start=0){
    if (start>end)
    {
        return true;
    }
    
    if (s[start]!=s[end])
    {
        return false;
    }
    checkPalindrome(s,end-1,start+1);
    
    
}
int main(int argc, char const *argv[])
{
    string a = "naman";
    int end = a.length()-1;
    if (checkPalindrome(a,end))
    {
        cout<<"valid palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}
