
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    char b = 'a';
    int* ptr = &a;
    char * cha = &b;// cha will definately store address of b but if you print it with the help of the cout then it will behave differently like if you print the cha the *cha will be printed with some garbage value
    cout<<cha<<endl; // value of cha with some garbage value
    // int *p = &a 
// above line means that p is pointer to a integer data and pointing at the address of a
    cout<<ptr<<endl;// value of ptr which is address of a 
    cout<<&a<<endl; // address of a 
    cout<<*ptr<<endl;// value of the address at which this pointer is pointing
    // size of the pointer will always be same irrespective of the data type it is pointing
    // like ptr and ch have same size 8 byte or 4 byte depending on the architecture;
    int arr[] = {15,29,34,41};
    int* p = arr;
    // for normal integer or character we do p = &a but for arrays  we do not write & operator before a  cause arr is already a pointer
    // we can copy a pointer
    cout<< p<<endl;//value of p which is address of arr 
    cout<<arr<<endl;// address of array arr
    cout<<&arr<<endl;// address of array arr
    cout<<&arr[0]<<endl;// address of first element of array arr
    // all four above are same
    // 
    cout<<*arr<<endl; //  value at the address arr 
    cout<<*p<<endl;// value of the address at which this pointer is pointing
    cout<<*(arr+1)<<endl;// value of the address after adding 1 to address arr adding one means adding with respective size like 4 for integer
    cout<<*(arr+2)<<endl;
    int i = 0;
    cout<<arr[i]<<endl;// 
    cout<<i[arr]<<endl;//same as above
    // for character arrays cout behaviour is different
    cout<<"::::"<<endl;
    char ch[] = "ayush";
    char * c = ch;
    char * c1 = &ch[0];// this would be better approach to create a pointer
    cout<<ch<<endl;// whole array print, cause behaviour of cout is different for integer array and character array means whole array will be printed until null character is not found;
    cout<<&ch<<endl;// address of first element of ch array
    cout<<ch[0]<<endl; //value of first element of ch
    cout<<c<<endl;// value of a pointer c which is the whole value of ch
    cout<<*c<<endl;
    cout<<&c<<endl;
    cout<<c1<<endl;

}