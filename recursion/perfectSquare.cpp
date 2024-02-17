#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int minimumSquare(int a){
 if (a==0)
 {
    return 0;
 }
 int x = sqrt(a);
 int i = 1;
 int ans = INT16_MAX;
 while (i<=x)
 {
    int count = minimumSquare(a-i*i)+1;
    ans = min(ans,count);
    i++;
 }
 
    return ans;
}
int main(int argc, char const *argv[])
{
    int a = 11 ;
    cout<<minimumSquare(a)<<endl;
    return 0;
}
