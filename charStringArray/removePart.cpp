#include <iostream>
#include <string.h>
using namespace std;
string removeWord2(string s, string a){
    int pos = s.find(a);
    while (pos!= string::npos)
    {
        s.erase(pos, a.length());
        pos = s.find(a);
    }
    return s;
    
}
string removeWord(string s, string a)
{
    for (int i = 0; i < s.length(); i++)
    {
        int count = 0;
        for (int j = 0; j < a.length(); j++)
        {
            if (s[i + j] == a[j])
            {

                count++;
            }
        }
        if (count == a.length())
        {
            s.erase(i, a.length());
            i = 0;
        }
    }
    return s;
}
int main(int argc, char const *argv[])
{
    string str = "daabcbaabcbc";
    string s = "hashuasashuhuji";
    string x = removeWord2(str, "abc");
    string y = removeWord(str, "abc");
    cout << x << endl;
    cout << y << endl;
    return 0;
}
