#include <iostream>
using namespace std;

string compressStr(string s)
{
    int mainCount = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int count = 1;
        int j = i + 1;
        while (s[i] == s[j] && j < s.length() && !isdigit(s[i]))
        {
            count++;
            s.erase(j,1);
            mainCount = count;
        }
        if (count>1 && count < 10)
        {
            s.insert(j,to_string(mainCount));
        }
        if (count>=10)
        {
            int x =to_string(mainCount).length();
            
            for (int i = 0; i < x; i++)
            {
                char z = to_string(mainCount)[i];
                s.insert(j+i,1,z);
            }
            
           
        }
        
        
        i = j - 1;
    }
    return s;
}
int main(int argc, char const *argv[])
{
    string a = "aaiooooooooooooooiiik";
    int num = 10;
    // cout<<a.insert(1,to_string(num))<<endl;
    cout << compressStr(a) << endl;
    cout << compressStr(a).length() << endl;
    // fun fact  in this question we have write 14 or any multipledigit number as multiple character 
    // like for example 103 will be written as '1''0''3' not like "103"


    return 0;
}
