#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr = {1,5,3,4,3,5,6};
    vector<int> arr2 = {1,2,3,4,5,6,7};
    // we need to find the element which is repeating and that element should have smallest index (index should start with 1)
    // if no element found to be repeating then print -1
bool x = true;
    for (int i = 0; i < arr.size(); i++)
    {
        
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j]==arr[i] && i!=j)
            {
                x = false;
                cout<<i+1<<" ";
                break;
            }
            
        }
        // always use == for equating even for bool type  of variables :)
        if (x == false)
        {
            break;
        }
        
        
    }
    if (x == true)
    {
        cout<<"-1";
    }
    
    
    return 0;
}
