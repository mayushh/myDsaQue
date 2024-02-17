#include<iostream>
using namespace std;
int getlength(char arr[]){
    int length = 0;
    int i = 0;
    while(!arr[i]=='\0'){
        length++;
        i++;
    }
    return length;
}
int main(int argc, char const *argv[])
{
    char  arr[20];
    cin.getline(arr,20);
    int i = 0;
    int j = getlength(arr)-1;
    while (i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<arr;
    
    return 0;
}
