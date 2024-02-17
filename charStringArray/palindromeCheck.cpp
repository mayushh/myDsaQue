#include<iostream>
#include <cstring>
using namespace std;
bool palindromeCheck(char arr[]){
    int i = 0;
    int j = strlen(arr)-1;
    while (j>=i)
    {
        if(arr[i]!=arr[j]){
            return false;
        }
        
            i++;
            j--;

    }
    return true;
}
int main(int argc, char const *argv[])
{
    char palin[100] = "nitin";
       if ( palindromeCheck(palin))
    {
       cout<<"yes it's a palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    
    return 0;
}
