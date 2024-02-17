#include<iostream>
#include<vector>
using namespace std;
string reverseString(string& s,int start, int end){
    if (start>end)
    {
        return "";
    }
    swap(s[start],s[end]);
    return reverseString(s,start+1,end-1);
}

int main(int argc, char const *argv[])
{
    string s = "ayush";
    cout<<s<<endl;
    cout<<reverseString(s,0,s.length()-1);  
    cout<<s<<endl;

    return 0;
}
