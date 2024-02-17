#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> arr ;
    int num = 12;
    
    int i = 0;
    while (i <= num)
    {   i++;
        arr.push_back(i);
        
        
    }
    // for (int j = 0; j < num; j++)
    // {
    //     cout<<arr[j]<<" ";
    // }
    int start = 0;
    int end = num;
    bool x = false;
    int ans= 0;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        int element = arr[mid];
        if (element*element==num)
        {
            cout<<element<<" is the perfect square root of the "<<num<<endl;
            x = true;
            break;
        }
        else if (element*element<num)
        {
            start = mid + 1;
            ans = element;
            
        }
        else{
            
            end = mid - 1;

        }
        
    }
    int precision = 4;
    double step = 0.1;
    double result;
    for (int i = 0; i < precision; i++)
    {
        double x = ans;
        while(x*x <= num){
           x = x+step;
           result = x;
                      
        }
        
        
         step = step / 10;
    }
    
    cout<<result<<endl;
    
    return 0;
}
