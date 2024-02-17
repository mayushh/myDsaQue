#include<iostream>
#include<vector>
using namespace std;
int x(int a){
    int n ;
    if(a==0){
        return 1;
    }
    if(a==1){
        return 1;
    }
    if(a==2){
        return 2;
    }

    return x(a-2)+x(a-1);
}
    int main() {
       int n = 4;
       cout<<x(n);
    }
