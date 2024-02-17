#include <iostream>
#include <vector>
using namespace std;
void printAllsub(vector<int> a, int index, int start)
{
    if (start >=a.size())
    {
        return;
    }
    if (index >= a.size())
    {
        index = ++start;
    }
    for (int j = start; j < index; j++)
    {
        
        cout<<a[j]<<" ";
    }
    if (start!=index)
    {
        cout<<endl;// ye if condition sirf unnecessary extra lines na aaye is liye daali hai confustion hoto remove bhi kr sakte ho
    }
    
  

    printAllsub(a, index+1,start);
}
vector<vector<int>> printAllsub2(vector<int> a, vector<vector<int>>& v, int index,int k )
{

   if (k>=a.size())
   {
    return v;
   }
   if (index >= a.size())
   {
        index = ++k;
   }
   vector<int> x;
   for (int i = k; i < index; i++)
   {
        x.push_back(a[i]);
   }
   v.push_back(x);
   return printAllsub2(a,v,index+1,k);
   
   
}
int main(int argc, char const *argv[])
{
    vector<int> a = {1, 2, 3, 4};
    int i = 0, k = 1;

  vector<vector<int>> result;
    
    // printAllsub2(a, result, 0, 0);

    // for (int i = 0; i < result.size(); i++)
    // {
    //     for (int j = 0; j < result[i].size(); j++)
    //     {
    //         cout<<result[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    printAllsub(a,1,0);
     
    
    
    return 0;
}
