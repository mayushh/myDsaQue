#include <iostream>
#include <vector>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i]<= mid)
        {
            pageSum = pageSum + arr[i];
        }
        else{
            studentCount++;
            if (studentCount > k || arr[i]>mid)
            {
                return false;
            }
            pageSum = arr[i];
            
        }
        
    }
    return true;
}
int main(int argc, char const *argv[])
{
    int n = 4;//number of books
    int k = 2;//number of student
    int a[] = {12, 34, 67, 90};// array of books 
    int s = 0;// start
    int sum = 0;
    int ans ;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    int e = sum;
    
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(a,n,k,mid))
        {
             ans = mid;
             e = mid - 1;
           
        }
        else
        {
           s = mid + 1;
        }
    }
    cout<<ans;
    return 0;
}
