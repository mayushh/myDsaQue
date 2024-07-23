#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i){
    int largest = i;
    int right = i*2+2;
    int left = i*2+1;
    if (left < n && arr[largest]<arr[left])
    {
        largest = left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr,n,largest);
    }
    
}
int main(){
    int arr[10] = {1,3,2,4,5,7,6,8,9,0};
    for (int  i = 5; i >=0 ; i--)
    {
        heapify(arr,10,i);
    }
    for (int  i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}