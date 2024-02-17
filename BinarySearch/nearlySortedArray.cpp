#include<iostream>
using namespace std;

int indexOfElement(int arr[],int size, int target){
    int start = 0;
    int end = size - 1;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if (arr[mid]==target)
        {
            return mid;     
        }
        else if ( mid+1 > start && arr[mid+1]==target)
        {
            return mid+1;
        }
        else if ( mid-1 > end && arr[mid-1]==target)
        {
            return mid -1 ;
        }
        else if (arr[mid]<target)
        {
            start = mid + 1;
        }
        else {
            end = mid -1;   
        }
        
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    // nealy sorted array means that 
    // element will the either ith or i+1th of i-1th  present if array was sorted 
    int arr[10] = {10,3,20,40,30,50,60,70,100,90}; // nearly sorted 
              //  {3,10,20,30,40,50,60,70,90,100} perfectally sorted
    int size = 10;
    int target = 90;
    int ans = indexOfElement(arr, size, target);
    if (ans == -1)
    {
        cout<<"not found"<<endl;    
    }
    else{
        cout<<" the index of the given target is "<<ans<<endl;
    }
    
    return 0;
}
