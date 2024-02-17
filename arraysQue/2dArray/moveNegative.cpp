#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int start = 0;
    vector <int> arr={1,2,4,5,-2,6,-5,-4};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]<0)
        {
            swap(arr[i],arr[start]);
            start++;
        }
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
