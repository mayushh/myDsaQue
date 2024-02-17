#include<iostream>
using namespace std;

string reverseString(string s){
    int i = 0;
    int j = s.length()-1;
    while(i<j){
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
        {
            if (s[j]=='a' || s[j]=='e' || s[j]==73 || s[j]==79|| s[j]==85|| s[j]==97|| s[j]==101|| s[j]==105|| s[j]==111|| s[j]==117)
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else{
                j--;
            }
            
        }
        else{
            i++;
        }
        
        
    }
    return s;
}
int main(int argc, char const *argv[])
{
    // write a function to reverse a string but non vowel letter will be  in same position means only revers vowels
    string s = "a-bcd";
    string s1 = "howare@ you"; 
    string s2 = "level"; 
    string s3 = "leetcode"; 
    
               //uoyera woh
    // the output should be "d-cba";
    cout<<reverseString(s)<<endl;
    cout<<reverseString(s1)<<endl;
    cout<<reverseString(s2)<<endl;
    cout<<reverseString(s3)<<endl;
    
    
    return 0;
}
