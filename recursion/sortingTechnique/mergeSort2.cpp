#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>&a , int s , int e){
    int mid = (s+e)/2;
    int len1 = mid - s+1;
    int len2 = e - mid;
    int* left = new int[len1];
    int* right = new int[len2];
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = a[k];
    }
    k = mid +1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = a[k];
    }
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = s;
    while (leftIndex<len1 && rightIndex<len2)
    {
        if(left[leftIndex]<right[rightIndex]){
            a[mainIndex++] = left[leftIndex++];
        }
        else{
            a[mainIndex++] = right[rightIndex++];
        }
    }
    while (leftIndex<len1)
    {
        a[mainIndex++] = left[leftIndex++];
    }
    while (rightIndex<len1)
    {
        a[mainIndex++] = right[rightIndex++];
    }
    
    
    
}
void mergeSort(vector<int> &a, int s, int e)
{

    if (s >= e)
    {
        
        return ;
    }
   // break kardo 
    int mid = s - (s - e) / 2;
    // sort krdo
 mergeSort(a, s, mid);
 mergeSort(a, mid + 1, e);
 // merge kardo
    merge(a,s,e);
   
   
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {3, 5, 7, 6, 9,3, 1};
    int mid = 2;
    mergeSort(arr, 0, 6);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}