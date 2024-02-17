#include<iostream>
using namespace std;
int peakElement(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        {
            return arr[mid];
        }
        else if (arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1])
        {
            start = mid+1;
        }
        // else if (arr[mid]<arr[mid-1]&&arr[mid]>arr[mid+1])
        // {
            
        // }
        else{
            end = mid-1;
        }
        
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int arr[10] = {1,2,3,5,7,15,11,9,7,5};
    int ans = peakElement(arr, 10);// size is 10;
    if (ans == -1)
    {
        cout<<"no peak"<<endl;
    }
    else{
        cout<<ans;
    }
    
    return 0;
}
