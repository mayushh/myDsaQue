#include<iostream>
using namespace std;
#include<vector>
int main(){
    // find pair in this array which have sum of 9 like 4,5  7,2  3,6
    vector <int>  arr {1,3,5,7,2,4,6};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i]+arr[j]==9 && i>=j)// instead of writing this i>=j condition so that we don't have same pair again flipped 
                                        // we can int j = i+1 then the second won't check again all the element
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
            
        }
        
    }
    // same que but this time find for tripplet

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            for (int k = j+1; k < arr.size(); k++)
            {
                if (arr[i]+arr[j]+arr[k]==10)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
                
            }
            
        }
        
    }
    
    

}