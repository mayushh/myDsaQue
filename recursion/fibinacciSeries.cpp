#include <iostream>
using namespace std;
int fibi(int n)
{
    if (n<=1)
    {
        return n;
    }
    return fibi(n-1)+fibi(n-2);
    
}
int main(int argc, char const *argv[])
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cout<<fibi(i)<<" ";
    }
    
   
    return 0;
}
