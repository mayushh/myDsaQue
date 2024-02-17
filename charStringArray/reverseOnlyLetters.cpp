#include<iostream>
using namespace std;

string reverseString(string s){
    int i = 0;
    int j = s.length()-1;
    while(i<j){
        if ((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
        {
            if ((s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122))
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
    // write a function to rever a string but non letter will be  in same position
    string s = "a-bcd";
    string s1 = "howare@ you"; 
    string s2 = "level"; 
    
               //uoyera woh
    // the output should be "d-cba";
    cout<<reverseString(s)<<endl;
    cout<<reverseString(s1)<<endl;
    cout<<reverseString(s2)<<endl;
    
    
    return 0;
}
