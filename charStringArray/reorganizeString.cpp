#include <iostream>
using namespace std;
string rearrange2(string s){
    // first we need to find most frequent char cause if we are able to place most frequent character with one space then rest will get placed and that string is rearrangable
    int maxChar = 0;
    for (int i = 0; i < s.size(); i++)
    {
        
    }
    
}
bool done(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            return false;
        }
    }
    return true;
}
string rearrange(string s) // this approach this very messy but made by me  
{
    if (done(s))
    {
        return s;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {

            if ((i - 2) >= 0 && s[i + 1] != s[i - 2])
            {

                swap(s[i + 1], s[i - 2]);
            }
            else if ((i + 2) < s.size())
            {
                for (int j = i + 2; j < s.size(); j++)
                {
                    if (s[i + 1] != s[j])
                    {
                        swap(s[i + 1], s[j]);
                        break;
                    }
                }
            }
        }
        if (done(s))
        {
            break;
        }
    }
    if (!done(s))
    {
        return "\"\"";
    }
    return s;
}
int main()
{
    string s = "aayuusshh";
    string s1 = "aaabc";
    string s2 = "aaabx";
    cout << rearrange(s) << endl;
    cout << rearrange(s1) << endl;
    cout << rearrange(s2) << endl;

    // rearrange a string such a way that no same letter come adjecent to each other
    // if not possible such arrangement then just return ""
}