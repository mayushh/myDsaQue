#include<iostream>
using namespace std;
int max (int arr[][5], int row, int column){

    int max = INT8_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
          if (arr[i][j]>max)
          {
                max = arr[i][j];
          }

          
            
        }
        
    }
    return max;
    
}
int min (int arr[][5], int row, int column){

    int max = INT8_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
          if (arr[i][j]<max)
          {
                max = arr[i][j];
          }

          
            
        }
        
    }
    return max;
    
}

int main(int argc, char const *argv[])
{
     int arr[4][5] = {{1,2,3,4,3},{3,2,1,3,2},{1,2,5,7,0},{9,2,1,4,7}};
    int val = max(arr,4,5);
    int va2l = min(arr,4,5);
    cout<<"maximum and minimum values are respectively : "<<val<<", "<<va2l;
    return 0;
}
