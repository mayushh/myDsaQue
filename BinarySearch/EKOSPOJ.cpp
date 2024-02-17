#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector <int> arr, int mid, int h){
    int heightSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] >= mid)
        {
            heightSum = heightSum + arr[i] - mid;
        }
    }
     if (heightSum >= h)
        {
            return true;
        }
        else {
            return false;
        }
    
}
int main(int argc, char const *argv[])
{
    int n = 6;
    vector <int> arr = {20,15,10,17,20,30};
    int heightReq = 20;
    int start = 0;
    int mx= 0;
    int ans;
    for (int i = 0; i < n; i++)
    {
       mx = max(mx, arr[i]);
    }
    int end = mx;
    // cout<<end;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if (isPossible(arr,mid,heightReq))
        {
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    cout<<ans;
    return 0;
}
