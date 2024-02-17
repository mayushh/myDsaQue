#include<iostream>
using namespace std;
void check(int a[]){
    // arr is the pointer send by the 
    cout<<"size of array is "<<sizeof(a)<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    a[0] = 50;
    // this will create changes in main array 
}
void check2(int* a){
    *a = *a +2;
    
}
int main (){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"size of array is "<<sizeof(arr)<<endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl<<"now calling check function"<<endl;
    
    check(arr);
    cout<<"back to main function"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"end"<<endl;
    int a = 79;
    int* ptr = &a;
    check2(ptr);
    cout<<a<<endl;

}