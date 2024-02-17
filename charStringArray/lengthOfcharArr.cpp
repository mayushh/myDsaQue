#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char arr[50];
    cin.getline(arr,45);
    int i = 0;
    int count=0;
    while(true){

        if ((int)arr[i]==0)
        {
           break;
        }
        else{
            count++;
            i++;
        }
        
    }
    cout<<count<<endl;
    return 0;
}
