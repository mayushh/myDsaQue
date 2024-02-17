#include<iostream>
using namespace std;
int power(int a, int p){
    if ( p==1)
    {
        return a;
    }
    if (p==0)
    {
        return 1;
    }
    
    int ans = a * power(a,p-1);
    
}
int main(int argc, char const *argv[])
{
    int x = 2;
    int p = 3;
    cout<<power(x,p);
    return 0;
}
