#include<iostream>
using namespace std;
void check(int a, int arr[]){
    a++;
    arr[0]++;
    // so the array is pass by reference and integer is pass by value
    // because when we pass an array we pass the address of the first element of the array 
}
int main(){
    int a = 6;
    int arr[8] = {6,5,4,3};
    cout<<a<<" "<<arr[0]<<endl;
    check(a,arr);
    cout<<a<<" "<<arr[0]<<endl;
   

}