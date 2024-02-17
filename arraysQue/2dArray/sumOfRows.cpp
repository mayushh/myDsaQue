#include<iostream>
using namespace std;
int main (){
    // print the of the rows of 2d array  
    int arr[4][5] = {{1,2,3,4,3},{3,2,1,3,2},{1,2,5,7,0},{9,2,1,4,2}};
    for (int i = 0; i < 4; i++)
    {
         int sum = 0;
        for (int j = 0; j < 5; j++)
        {
           sum = sum + arr[i][j];
          

        }
        cout<<sum;
        cout<<endl;
        
        
    }
    cout<<endl;
    cout<<endl;
    // print sum of column of 2d array
    for (int i = 0; i < 5; i++)
    {
        int sum= 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum+arr[j][i];
        }
        cout<<sum<<" ";
        cout<<endl;
    }
    
    
}