#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    double divident = 20;
    double divisor = 3;
    vector <int> arr;
    for (int i = 0; i < divident; i++)
    {
        arr.push_back(i+1);
    }
    int start = 0;
    int end = divident;
    double ans ;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if (divident/divisor == arr[mid])
        {
            // cout<<arr[mid]<<endl;
            ans = arr[mid];
            break;
        }
        else if (divident/divisor < arr[mid])
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
            }
    }
    
    int precision = 3;
    double step = 0.1;
    int i = 0;
    double result;
    for (int i = 0; i < precision; i++)
    {
        double x = ans;
       while (x <= divident/divisor   )
       {
         
            x = x + step;
            result = x;
            
        }
       step = step / 10;
    }
    cout<<result;
    return 0;
}
