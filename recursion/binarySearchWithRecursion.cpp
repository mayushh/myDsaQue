#include<iostream>
using namespace std;
#include<vector>
int binary(vector<int>&a,int& key,int &s, int& e){
    if (s>e)
    {
        return -1;
    }
    
 int mid = s + (e - s) / 2;
 if (a[mid] == key)
 {
    return mid;
 }
 else if (a[mid]>key)
 {
    e = mid - 1;
 }
 else{
    s = mid + 1;
 }
 return binary(a,key,s,e);
 
 }
int main(){
    vector <int> arr = {0,1,2,3,4,5,6,7,8,54};
    // find the index of the given key
    int key = 5;
    int start = 0;
    int end = arr.size()-1;
    cout<<binary(arr,key,start,end);
    return 0;
}