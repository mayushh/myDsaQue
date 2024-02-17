#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
     int arr[3][3] = {{1,2,3},{3,5,1},{1,2,5}};
     int brr[3][3] ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
    
    // transposing the  array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // swap(arr[i][j], brr[j][i]);
            brr[j][i]=arr[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    
    return 0;
}
