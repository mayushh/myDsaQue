#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int k, int sol)
{
    int timeTaken = 0;
    int working = 1;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > sol || k > n)
        {
            return false;
        }
        if (arr[i] + timeTaken > sol)
        {
            working++;
            if (working>k)
            {
                return false;
            }
            timeTaken = arr[i];
        }
        else{
            timeTaken =  arr[i] + timeTaken;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    int n = 5;
    int k = 3;
    int start = 0;
    int end = 0;
    int arr[] = {5, 10, 30, 20, 15};
    for (int i = 0; i < n; i++)
    {
        end = end + arr[i];
    }
    // cout<<end;
    int timeTaken;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, n, k, mid))
        {
            timeTaken = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << timeTaken;
    return 0;
}
