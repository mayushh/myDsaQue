#include <iostream>
using namespace std;
// to count the numbers of zeros and ones in the array
int count(int arr[], int size)
{
    int zeros = 0;
    int ones = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeros = zeros + 1;
        }
        if (arr[i] == 1)
        {
            ones = ones + 1;
        }
    }
    cout << "no of zeros and ones are respectively " << zeros << " " << ones << endl;
}
// to count to min and max number of an arr
int minMax(int arr2[], int size)
{
    int min = INT8_MAX;
    int max = INT8_MIN;
    for (int i = 0; i < size; i++)
    {

        if (arr2[i] > max)
        {
            max = arr2[i];
        }
        if (min > arr2[i])
        {
            min = arr2[i];
        }
    }
    cout << max << " " << min << endl;
}
// printing extremes of the array
void extreme(int arr3[], int size)
{
    
    int n = 0;
    int j = size-1;
    // size--;
    for (int i = 0; i < size; i++)
    {

        if (i<j)
        {
              cout<<arr3[i]<<" "<<arr3[j]<<" ";
              j--;
        }
    }
    
}
void revertArray(int arr4[],int size){
    int n = size - 1;
     int x[9] ;
    for (int i = 0; i < size; i++)
    {
        x [i]= arr4[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        if (i<=4)
        {
            arr4[i] = arr4[n-i];
        }
        else{
            arr4[i] = x[n-i];
        }
        
       
    }
    for (int i = 0; i < size; i++)
    {
       cout<<arr4[i]<<" ";
    }
    
    
    
    
    
    
}
int main()
{
    // int arr[] ={1,0,0,1,0,1,1,0,0,1,1,0,1};
    // // count(arr,13);
    // int array[] = {20,1,4,3,5,71,99,7,88,5};
    int array2[] = {0, 1, 2, 3, 4, 5, 6, 7,8,9};
    // minMax(array,10);
    // extreme(array2, 9);
    revertArray(array2,10);
}