#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int> arr, int cows, int mid)
{
    int cowCount = 1;
    int lastPosi = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] - lastPosi >= mid)
        {
            cowCount++;
            if (cowCount == cows)
            {
                return true;
            }
            lastPosi = arr[i];
        }
       
    }
    return false; 
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {2, 4, 1, 3, 5, 6};
    sort(arr.begin(), arr.end());    
    int c = 2;
    int start = 0;
    int ans;
    int end = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (end < arr[i])
        {
            end = arr[i];
        }
    }
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr,  c, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout<<ans;

    return 0;
}
