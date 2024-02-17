#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> diff;
    vector<int> finalArray;
    vector<int> array = {12,16,22,30,35,39,42,45,48,50,53,55,56};
    vector<int> array2 = {12,16,22,30,35,39,42,45,48,50,53,55,56};// for another question

    int x = 35;
    int k = 4;
    int result = 0;
    // loop below is for saving difference in new array 
    for (int i = 0; i < array.size(); i++)
    {
        result = abs(array[i] - x); // modulus of the output
        diff.push_back(result);
        
    }
    
    // loop below is for sorting result array in increasing order of difference 
    // and doing same for given array so that we can have an array where we have sort in increasing order of difference with x with all the element
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = i + 1; j < array.size(); j++)
        {
            if (diff[i] > diff[j])
            {
                swap(diff[i], diff[j]);
                swap(array[i], array[j]);
                
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        finalArray.push_back(array[i]);
    }
    
    for (int i = 0; i < finalArray.size(); i++)
    {
        for (int j = i + 1; j < finalArray.size(); j++)
        {
            if (finalArray[i] > finalArray[j])
            {

                swap(finalArray[i], finalArray[j]);
            }
        }
    }
   

    for (int i = 0; i < finalArray.size(); i++)
    {
        cout << finalArray[i] << " ";
    }
    // we have another  ans with less time complexity but only work when array is sorted 
    // two pointer approach
    cout<<endl;
    int l = 0;
    int h = array2.size()-1;
    while (h-l>k)
    {
        if (x-array2[l]>=array2[h]-x)
        {
            l++;
        }
        else{
            h--;
        }
        
    }
    vector <int> ans;
    for (int i = l; i < h; i++)
    {
        ans.push_back(array2[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    

    return 0;
}
