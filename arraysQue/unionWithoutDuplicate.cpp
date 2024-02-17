#include <iostream>
#include <vector>
using namespace std;
int main()
{
 // todo the solution;
    vector<int> arr1 = {1, 2, 3,3,2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> arr2 = {2, 4, 3, 6, 7, 8, 3, 2};
    vector<int> array;
    for (int i = 0; i < arr1.size(); i++)
    {
        if(arr1[i]>0){
        array.push_back(arr1[i]);
        }
        for (int j = 0; j < arr1.size(); j++)
        {
            if (arr1[i] == arr1[j] && i !=j)
            {
                arr1[j]=-1;
            }
            
        }
        
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        if(arr2[i]>0){
        array.push_back(arr2[i]);
        }
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr2[i] == arr2[j] && i !=j)
            {
                arr2[j]=-1;
            }
            
        }
        
    }
    for (int i = 0; i < array.size(); i++)
    {
        cout<<" "<<array[i];
    }
    
}