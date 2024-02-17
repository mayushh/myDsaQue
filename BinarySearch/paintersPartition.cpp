#include<iostream>
using namespace std;
bool possibleSol(int arr[], int size, int p, int mid){
    int painter = 1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (sum + arr[i]<=mid)
        {
          sum = sum + arr[i];
          
        }
        else{
            painter++;
            if (arr[i]>mid||painter>p)
            {
                return false;
            }
            sum = arr[i];
        }
        
    }
      return true;
}
int main(int argc, char const *argv[])
{
    int arr[] = {5,5,5,5,5,4};
    int  p = 2;
    int n = 6;
    int start = 0;
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int end = sum;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if (possibleSol(arr,n,p,mid))
        {
            // cout<<possibleSol(arr,n,p,mid)<<endl;
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        
    }
    cout<<ans;
    
    return 0;
}
