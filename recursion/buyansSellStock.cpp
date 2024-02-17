#include<iostream>
using namespace std;
#include<vector>
int maxProfit(vector<int> &a,int l, int r,int maxP){
    if (r>=a.size())
    {
        return maxP;
    }
    if (a[l]<a[r])
    {
        maxP = max(maxP,a[r]-a[l]);
        
    }
    else{
        l = r;
    }
    return maxProfit(a,l,r+1,maxP);
    
    
}
int main(int argc, char const *argv[])
{
    vector <int>prices = {7,3,8,5,1,6,4};
    vector <int>prices2 = {7,6,5,4,3,5};
    cout<<maxProfit(prices2,0,1,0);
    return 0;
}
