#include<iostream>
using namespace std;
int main(){
    // declaring an array
    int  arr[3][4];
    // initilizing an array
    int brr[3][4]={
    {1,2,3,1},
    {4,5,6,1},
    {7,8,9,1}
    };

    // printing this array row wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<brr[i][j]<<" ";

        }
        cout<<endl;
    }
            cout<<endl;
            cout<<endl;

    // printing this array column wise
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<brr[j][i]<<" ";

        }
        cout<<endl;
    }
    
    

}