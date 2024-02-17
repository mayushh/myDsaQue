#include<iostream>
using namespace std;
int main(){
    // to over downsides of pointers reference variables are introduces
    // reference variable points to exacts same location what they are given to
    int a = 8;
    int &b = a; // this is how a reference variable is createtd 
    // by default we cannot set reference variable to null
    cout<<"before any operation "<<endl<<"a- "<<a<<endl;
    cout<<"b- "<<b<<endl;
    a++;// if you any opeations in a it will be directly reflected in variable b
    cout<<"after increament of a - "<<endl<<"a- "<<a<<endl;
    cout<<"b- "<<b<<endl;
    b++;
    cout<<"now after increment of b "<<endl<<"a- "<<a<<endl;
    cout<<"b- "<<b<<endl;

}