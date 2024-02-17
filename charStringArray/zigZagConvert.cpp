#include <iostream>
#include <vector>
using namespace std;
// here we need to convert the integer in zigzag and then read it line by line;

string zigZagConvert(string a, int r)
{
    string ans = "";
    vector<string> str(r);
    bool dir = true; // true = top to bottom; 0 = bottom to top
    int i = 0, row = 0;
    while (true)
    {

        if (dir )
        {
             
            str[row].push_back(a[i]);
            row++;
            i++;
            if (row == r)
            {
                dir = !dir;
                row = r - 2;
            }
           
        }
        else
        {
            str[row].push_back(a[i]);
            row--;
            i++;
            if (row == 0)
            {
                dir = !dir;
                
            }
            
        }
        if (i >= a.size())
        {
            break;
        }
    }
    for (int i = 0; i < str.size(); i++)
    {
        ans += str[i];
        // cout<<endl<<str[i]<<endl;
    }

    return ans;
}
int main()
{
    string s = "PAYPALISHIRING";
    string a = "ABCDEFGHIJKLMNOP";
    int r = 3;
    cout << zigZagConvert(a, r) << endl;
    return 0;
}