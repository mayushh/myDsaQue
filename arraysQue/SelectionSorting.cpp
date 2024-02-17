#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    // what is Selection sort
    // Selection sort works by taking the smallest element in an unsorted array and bringing it to the front. 
    vector <int> arr = {3,4,1,8,5,7,9};
    int size = arr.size();
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i]>arr[j])
            {
               swap(arr[i], arr[j]);
            }
            
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
