// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void markAllMultiple(vector<bool> &x,int a, int b){

    int i = b*b;
    while (i<a)
    {
        x[i] = false;
        i += b;
    }
    
}
int countPrimes(int a)
{
    if (a == 0 || a == 1)
    {
        return 0;
    }
    vector<bool> x(a,true);
    x[0]=x[1] = false;
    int ans = 0;
    for (int i = 2; i < a; i++)
    { 
        if (x[i])
        {
           ans++;
            markAllMultiple(x,a,i);           
        }
        
    }

    return ans;
}

int main()
{
    int p = 100;
    cout <<countPrimes(p);

    return 0;
}
