#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int start = 0;
    int note= 0;
    vector<int> arr = {1, 0, 1, 2, 0, 1, 0, 1, 2, 1};
   
     
       int n=arr.size();
       
       int i=0,j=n-1,k=0;
 
       while(k<=j)
       {
           if(arr[k]==1)
           {
               k++;
           }
           else if(arr[k]==0)
           {
               swap(arr[i],arr[k]);
               i++;   
               k++;
           }
           else if(arr[k]==2)
           {
               swap(arr[j],arr[k]);
               j--;
           }
       }
           
     for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    // cout<<arr.size();
    return 0;
}
