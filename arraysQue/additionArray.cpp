#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> arr ={1,2,3,8};
    vector <int> brr ={4,3,6,4};
    int i = arr.size()-1;
    int j = brr.size()-1;
    vector <int> array ;
     int carry = 0;
     int x = 0;
      int sum = 0;
      int once = 0;
    while (i>0 && j>0)
    {
        sum = arr[i]+brr[j]+carry;
        once = sum % 10;
        array.push_back(once);
        carry =  sum/10;
        i--;
        j--;
        // x ++;
    }
    if (carry)
    {
        array.push_back(carry);
    }
    
   
    // cout<<arr[i]+brr[j];/
    
     for (int i = 0; i < array.size(); i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}
