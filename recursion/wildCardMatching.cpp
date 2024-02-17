#include <iostream>
#include <vector>
using namespace std;
bool wildMatch(string& s, string& p, int i, int j)
{
    // base case;
    if (i == s.size() && j == p.size())
    {
        return true;
    }

    if (i == s.size() && j < p.size())
    {
        while (j < p.size())
        {
            if (p[j] != '*')
            {
                return false;
                
            }
            j++;
        }
        return true;
    }

    if (s[i] == p[j] || p[j] == '?')
    {
        // matched
        return wildMatch(s, p, i + 1, j + 1);
    }
    if (p[j] == '*')
    {
        bool caseA = wildMatch(s, p, i, j + 1);
        bool caseB = wildMatch(s, p, i + 1, j);
        return caseA||caseB;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    string s = "abcdefgh";
    string p = "a?*gh";
    if (wildMatch(s,p,0,0))
    {
        cout << "wildCard matched";
    }
    else
    {
        cout << "not matched";
    }
    

    return 0;
}
