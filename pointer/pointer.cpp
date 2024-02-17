#include<iostream>
using namespace std;
void modify(int** ptr){
    *ptr = *ptr +1; // we have changed the value of the pointer at which ptr is pointing
    // so it will point to another address which is not known 
}
int main (){
    int a = 9;
    int* p = &a;
    int **q = &p;
    cout<<"before"<<endl;
    cout<<a<<endl;// value of a 
    cout<<p<<endl;// value of pointer p
    cout<<*p<<endl;// value stored at the address at which this pointer is pointing
    modify(q);
    cout<<endl<<"after"<<endl;
    cout<<a<<endl;// value of a 
    cout<<p<<endl;// value of pointer p
    cout<<*p<<endl;// value stored at the address at which this pointer is pointing .... garbage value this time cause the address is changed by the function
    return 0;
}