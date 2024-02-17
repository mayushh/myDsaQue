#include <iostream>
using namespace std;
int trial(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int count = 0;
    int mid = start + (end - start) / 2;
    int s = mid - 1;
    int e = mid + 1;
    while (true)
    {
        if (arr[mid] == target)
        {
            

            if (arr[s] == target)
            {
                count++;
                s--;
            }
            if (arr[e] == target)
            {
                count++;
                e++;
            }
            if (arr[s] != target && arr[e] != target)
            {
                break;
            }
            
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
             s = mid - 1;
             e = mid + 1;
        }
        else
        {
            end = mid - 1;
             s = mid--;
             e = mid++;
        }
        mid = start + (end - start) / 2;
    }
    return count+1;
}
int binaryOccur(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int iniValue = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target && arr[mid - 1] != target)
        {
            // cout<< mid<<" ";
            iniValue = mid;
            break;
        }
        else if (arr[mid] == target && arr[mid - 1] == target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    //  cout<<countForFirst;
    //

    return iniValue;
}
int binaryOccurtwo(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int finalValue = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target && arr[mid + 1] != target)
        {

            finalValue = mid;
            break;
        }
        else if (arr[mid] == target && arr[mid - 1] == target)
        {
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return finalValue;
}
int main(int argc, char const *argv[])
{
    int arr[22] = {1, 2, 3, 4, 4,4,4 ,4, 4, 8, 9, 10,12,13,14,16,17,18,19,21,31,41};
    int size = 22;
    int target = 4;
    // int numberOfOccur = binaryOccur(arr, size, target);
    // if (numberOfOccur==-1)
    // {
    //     cout<<"not found"<<endl;
    // }
    // else{
    //     cout<<numberOfOccur<<endl;
    // }
    // return 0;
    int ans = binaryOccurtwo(arr, size, target) - binaryOccur(arr, size, target) + 1;
    int ans2 = trial(arr, size, target);
    cout << ans << " " << ans2;
}
