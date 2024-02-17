#include<iostream>
using namespace std;
// did it 
void targetReach(int n, int k, int target, int &count,int curr){
    if (n == 0 && curr == target)
    {
        count++;
        return ;
    }
    if (curr>target)
    {
        return ;
    }
    
    for (int i = 1; i <= k; i++)
    {
       
       

       targetReach(n-1,k,target,count,curr+i);

    }
   
    
}
int main(int argc, char const *argv[])
{
    int n = 30;
    int k  = 30;
    int target = 500;
    int count = 0;
    targetReach(n,k,target,count,0);
    cout<<count;
    
    return 0;
}
