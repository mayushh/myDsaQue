#include<iostream>
using namespace std;
void printAllpermutation(string &s,int i){
    
    if (i>=s.length())
    {
        cout<<s<<" ";
        return;
    }
     
    for (int j = i; j < s.length(); j++)
    {
        swap(s[i],s[j]); 
        printAllpermutation(s,i+1);  
        swap(s[i],s[j]); // this is back tracking if you don't want to do this swap again then just send string parameter  without reference
    }    
    
}
int main(int argc, char const *argv[])
{
    string a = "abc";
    printAllpermutation(a,0);
    return 0;
}
