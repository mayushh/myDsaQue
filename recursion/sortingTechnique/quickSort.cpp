#include<iostream>
#include<vector>
using namespace std;
int setPivotElement(vector<int> &arr ,int s, int e){
    int count = 0;
    int pivotIndex = s;
    int pivotElement = arr[s];
    for (int i = s; i <= e; i++)
    {
        if (pivotElement>arr[i])
        {
            count++;
        }
        
    }
    pivotIndex = s+count;
    swap(arr[s],arr[pivotIndex]);
    int i = s ;
    int j = e;
    while (i<pivotIndex && j>pivotIndex)
    {
        while (arr[i]<pivotElement)
        {
            i++;
        }
        while (arr[j]>pivotElement)
        {
            j--;
        }
        if (i<j)
        {
            swap(arr[i],arr[j]);
        }
        
        
        
    }
    
    return pivotIndex;
    
}
void quickSort(vector<int> &arr,int s , int e){
    if (s>=e)
    {
        return;
    }
    int p = setPivotElement(arr,s,e);


    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
    
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {8,1,20,30,6,5,60,5};
    int n = 8;
    int s = 0;
    quickSort(arr,s,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
