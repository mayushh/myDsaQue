#include<iostream>
using namespace std;
int main () {
    // pointer to a pointer 
    int a = 8;
    int * p = &a;
    int** q = &p;
    cout<<a<<endl;// value of a
    cout<<&a<<endl;// address of a 
    cout<<p<<endl;//value of pointer p or should say that the address the pointer is pointing
    cout<<&p<<endl;//address of pointer p
    cout<<*p<<endl;// value of pointer p or should say that the value of the address at which it is pointing
    cout<<q<<endl;// value of pointer to a pointer q or should say that the address of this pointer pointing at another integer type pointer p 
    cout<<&q<<endl;// address of pointer q
    cout<<*q<<endl;// value of the address it is pointing which is already a address means value of p
    cout<<**q<<endl;// value of the address at which the pointer p is pointing ,q is pointing the address of pointer p 
}