#include<iostream>
using namespace std;
int occur (int arr[],int size, int target){
    int start = 0;
    int end = size - 1;
    while (start<=end)  
    {
        int mid = start + (end-start)/2;
        if (arr[mid]==target && arr[mid-1]!=target)
        {
           return mid;
        }
        else if (arr[mid]==target && arr[mid-1]==target)
        {
            end = mid-1;
        }
        else if (arr[mid] < target)
        {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
       
        
    }
     return -1;
    
    
}
int main(int argc, char const *argv[])
{
    int arr [12]= {1,2,3,3,4,4,4,5,5,5,6,7};
    int numberOfOccur = occur(arr,12,5); // 10 is the size and 5 element we need to find occurance 
    if (numberOfOccur == -1)
    {
            cout<<"not found"<<endl;
    }
    else{
        cout<<numberOfOccur<<endl;
    }
    
    return 0;
}
