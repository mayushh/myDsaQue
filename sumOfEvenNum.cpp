#include <iostream>
using namespace std;
int sumOfEven(int n)
{
    int sum = 0;
    for (int i = 0; i <= 2*n; i=i+2)
    {
        sum = sum + i;
    }
    return sum;
    
}
int fact(int n){
    int factorial =1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial*i;
    }
    return factorial;
    
}
int main()
{
    
   int ans =  sumOfEven(50);
   int factorial = fact(10);
   cout<<ans<<" "<<factorial;
}