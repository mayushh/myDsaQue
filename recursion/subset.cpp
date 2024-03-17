#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void subset(vector<int>&a,int s, int e,vector<vector<int>>&ans,vector<int>&d){
    if (s>=e)
    {
        ans.push_back(d);
        return;
    }
    // exclude case
    subset(a,s+1,e,ans,d);



    // include case;
    d.push_back(a[s]);
    subset(a,s+1,e,ans,d);
    d.pop_back();
    
}
int main(int argc, char const *argv[])
{
    vector<int>a = {1,2,3};
    int s = 0;
    int e = a.size();
    vector<vector<int>>ans;
    vector<int>d;
    subset(a,s,e,ans,d);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}
