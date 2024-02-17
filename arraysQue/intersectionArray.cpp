#include<iostream>
using namespace std;
#include <vector>
int main(){
    int arr[]= {1,2,2,3,4,5,6,7,8,9,0,3};
    int sizeArr = sizeof(arr)/sizeof(arr[0]);
    int arr2[]= {2,4,6,8,0,3};
    int sizeArr2 = sizeof(arr2)/sizeof(arr2[0]);

    vector <int> array ;
    int count = 0;
    for (int i = 0; i < sizeArr; i++)
    {
        for (int j = 0; j < sizeArr2; j++)
        {
            if (arr[i]==arr2[j])
            {
                count++;
                arr2[j]=-1;
                array.push_back(arr[i]);
            }
            
       }
    }
    cout<<"the following will be the intersection array"<<endl;
    for (int i = 0; i < count; i++)
    {
        cout<<array[i]<<" ";
    }
    
}