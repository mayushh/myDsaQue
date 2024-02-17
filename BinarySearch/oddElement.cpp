#include<iostream>
using namespace std;
int indexOfOdd(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int count = 0;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if (arr[mid]!=arr[mid-1] && arr[mid]!= arr[mid+1])
        {
            return mid;
        }
        else if (arr[mid]==arr[mid-1] && mid%2==1)
        {
            start = mid + 1;
        }
        else if (arr[mid]==arr[mid+1] && mid%2==1)
        {
            end = mid - 1;
        }
        else if (arr[mid]==arr[mid+1] && mid%2==0)
        {
            start = mid + 1;
        }
        else {
            count++ ;
            end = mid - 1;
            
        }
    }
    return -1;
    
}
int main(int argc, char const *argv[])
{
    int arr[13] = {1,1,2,2,3,3,4,4,3,600,600,4, 4};
                //{0,1,2,3,4,5,6,7,8, 9, 10 ,11,12}
    int size = 13;
    int ans = indexOfOdd(arr, size);
    if (ans == -1)
    {
        cout<<"not found"<<endl;
    }
    else{
         cout<<"ans  is "<<arr[ans]<<" and present at index "<<ans;
    }
    
   
    return 0;
}
