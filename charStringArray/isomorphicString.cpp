#include <iostream>
#include <vector>
using namespace std;
vector<int> x;
vector<int> y;

vector<int> map(char a, char b)
{
    x.push_back(a);
    y.push_back(b);
    return x;
}
bool isMapped(char a)
{
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == a)
        {
            return true;
        }
    }
    return false;
}
bool isomorphicCheck(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }

    for (int i = 0; i < a.length(); i++)
    {
        if (!isMapped(a[i]))
        {
            map(a[i], b[i]);
        }
        else
        {
            for (int j = 0; j < x.size(); j++)
            {
                if ((int)a[i] == x[j]&&b[i] != y[j])
                {
                    
                        return false;
                    
                }
            }
        }
    }
    for (int i = 0; i < y.size(); i++)
    {
        for (int j = 0; j < y.size(); j++)
        {
            if (y[i] == y[j] && i != j)
            {
                return false;
            }
        }
    }

    return true;
}
int main()
{
    string s = "paper";
    string s1 = "titte";
    // we need to check wheather these two strings are isomorphic or not
    // isomorphic means one letter of given language will be mapped to one letter of same language
    // like in above example a is mapped to e and d is mapped to g so "add " will be written as "egg"
    // ada and egd will not be isomorphic cause first a is mapped to e and in 3rd letter a is is writted as d which is wrong and not isomorphic
    bool check = isomorphicCheck(s, s1);
    if (check)
    {
        cout << "isomorphic";
    }
    else
    {
        cout << "not isomorphic";
    }
}