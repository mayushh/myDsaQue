// write a program to find that the input array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int> &a ,int &i){
    if (i>=a.size())
    {
        return true;
    }
    if (a[i] > a[i+1])
    {
        return false;
    }
    int newI = i+1;
    return  isSorted(a,newI);
    
    
}
int main(){
    vector <int> a = {1,2,3,4,5,6,6,8};
    int i = 0;
    if (isSorted(a,i))
    {
        cout<<"given array is sorted";
    }
    else{
        cout<<"not sorted";
    }
    
    return 0;
}