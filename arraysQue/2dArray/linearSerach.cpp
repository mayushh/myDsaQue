#include<iostream>
using namespace std;
int main(int argc, const char** argv) {
 int arr[4][5] = {{1,2,3,4,3},{3,2,1,3,2},{1,2,5,7,0},{9,2,1,4,7}};
 int num = 7;
 for (int i = 0; i < 4; i++)
 {
    for (int j = 0; j < 5; j++)
    {
        if (num==arr[i][j])
        {
           cout<<" present at "<<i+1<<"th row and "<<j+1<<"th column"<<endl;
        }
        else{

        }
        
    }
    
 }
 





return 0;
}