#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector <int> arr1 {1,2,3,4,5};
    vector <int> arr2 {9,8,7,6,9,7,0};
    int x = arr1.size()+arr2.size();
    // we need to find union of these two arrays
    vector <int> arr3 ;
    for (int i = 0; i < x+1; i++)
    {
        
        if (i<arr1.size())
        {
            arr3.push_back(arr1[i]);
        }
        if(i>arr1.size()){
            arr3.push_back(arr2[i-arr1.size()-1]);
        }
    }
//    vector <int> arr3 ;
//      arr3.push_back(arr1[0]);
//      arr3.push_back(arr1[1]);
//      arr3.push_back(arr1[2]);
//      arr3.push_back(arr1[3]);
//      arr3.push_back(arr1[4]);
//     //  arr3.push_back(arr1[5]);
//      arr3.push_back(arr2[0]);
//      arr3.push_back(arr2[1]);
//      arr3.push_back(arr2[2]);
     for (int i = 0; i < arr3.size(); i++)
     {
        cout<<arr3[i]<<" ";
     }
     
}