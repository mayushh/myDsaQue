// here you need to check if the given string is valid palindrome or not , you can remove at most 1 character to make it as valid palindrome 
#include<iostream>
using namespace std;
bool validpalindrome(string s){
    int i = 0;
    int j = s.length()-1;
    while (i<=j)
    {
        if (s[i] != s[j])
        {
            j--;
            if (s[i] != s[j])
            {
                j++;
                i++;
                if (s[i] != s[j])
                {
                    return false;
                }
                s.erase(i-1,1);
                
            }
            s.erase(j+1,1);
            
        }
        i++;
        j--;
    }
    cout<<s;// don't need to do this but to check that why i am doing this 
    // in leatcode question it mentioned that after deleting that extra character check wheather it's a palindrome or not
    return true;
    
    
}
int main(int argc, char const *argv[])
{
    string str = "abca";
    
    bool x = validpalindrome(str);
    if (x)
    {
        cout<<endl<<"validpalindrome hai"<<endl;
    }
    else{
        cout<<"validpalindrome nhi hai"<<endl;
    }
    
    return 0;
}
