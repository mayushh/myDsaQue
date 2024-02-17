#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    
    vector<int> arr = {20, 15, 10, 17};
    int n = arr.size();
    int heightReq =50;
    int mx = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    int end = mx;
    int result = 0;
    for (int i = 0; i < end; i++)
    {
        ans = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (i<arr[j])
            {
                ans = ans + arr[j]-i;
            }
            if (ans >= heightReq)
            {
                result = i;
                // break;
            }
            
        }
       
        
        // cout<<ans<<" "<<i<<endl;
       
    }
    
    cout<<result;
    return 0;
}
