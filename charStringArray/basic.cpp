#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char ch[100];
    cout<<"enter you name"<<endl;
    //cin>>ch;// cin cannot read space so only first word come be displayed
    cin.getline(ch, 100);
    cout<<ch;
    return 0;
}
