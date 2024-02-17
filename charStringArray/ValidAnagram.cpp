#include <iostream>
using namespace std;
// #include<string.h>
bool anagramCheck(string a, string b)
{
    int n = a.length();
    if (a.length() != b.length())
    {
        return false;
    }

    for (int i = 0; i < n; i++ )
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
               b.erase(j,1);
               // do not udr a.erase(i,1 cause) after ever iteration i is moving forward in string but when something is erased letters are comming backword so some letter may get under touched  
            }
        }
        if (b.length()>n-i)
        {
            return false;
        }
        
               
    }

    if (b.length() != 0)
    {
        return false;
    }
    return true;
}
// now below is more optimized solution;
bool anagramCheck2(string a, string b){
    int freqTable[256] = {0};// initilize all elements with 0
    for (int i = 0; i < a.size(); i++)
    {
        freqTable[a[i]]++;
    }
    for (int i = 0; i < b.size(); i++)
    {
        freqTable[b[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if(freqTable[i]!=0){
            return false;
        }
        
    }
    return true;
    
    
}
int main(int argc, char const *argv[])
{
    string s = "anagram";
    string c = "nagaram";    
    // we need to check wheather c is anagram of s;
    if (anagramCheck(s, c))
    {
        cout << "yes it's an anagram"<<endl;
    }
    else
    {
        cout << "not Anagram"<<endl;
    }
    if (anagramCheck2(s, c))
    {
        cout << "yes it's an anagram"<<endl;
    }
    else
    {
        cout << "not Anagram"<<endl;
    }

    return 0;
}
