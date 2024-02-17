#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    // bubble sorting
    // What is a bubble sort?
    //A bubble sort algorithm goes through a list of data a number of times, comparing two items that are side by side to see which is out of order.
    vector <int> arr = {20,3,5,1,4,7,9,6,10};
    int size = arr.size();
    int element;
    bool x = false;
    for (int round = 1; round < size; round++)
    {
       
        for (int j = 0; j < size-round; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                x = true;
                // if no swap has been happened in this loop then x will remain false 
            }
           
            
        }
        if (x == false)
        {
            break;
            // break if no element is swapped
        }
        
        
        
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}