#include<iostream>
#include<vector>
using namespace std;
void phoneKeypad(vector<string>&a, vector<string>&ans, string&n, string &s, int i){
    if (i>=n.length())
    {
        ans.push_back(s);
        
        return;
        
    }
    
    for (int j = 0; j < a[n[i]-'0'-2].size(); j++)
    {
        s += a[n[i]-'0'-2][j];
        phoneKeypad(a,ans,n,s,i+1);
        s.pop_back();    
    }
    
    
}
int main(int argc, char const *argv[])
{
    vector<string>a={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string n = "24";
    vector<string> ans;
    string s = "";
    phoneKeypad(a,ans,n,s,0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
    return 0;
}
