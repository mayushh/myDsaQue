#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool possible(vector<int> arr, int mid, int n)
{

    int c = 0;
    int par = 0;
   

       for (int i = 0; i < arr.size(); i++)
       {
           int j = 1;
            int timeSum = 0;
            while (true)
            {
               if (timeSum + arr[i]*j <= mid)
               {

                    par++;
                    timeSum += arr[i]*j;
                    j++;
               }
               else{
                break;
               }

            }
           if (par>=n)
       {
        return true;
       }
       }

    return false;
}
int main(int argc, char const *argv[])
{
    int want = 10;
    vector<int> chefRating = {1, 2, 3, 4};

    int maxRating = 0;
    for (int i = 0; i < chefRating.size(); i++)
    {

        maxRating = max(maxRating, chefRating[i]);
    }
    // cout<<maxRating<<endl;
    int maxTime = 0;

    for (int i = 1; i <= want; i++)
    {
        maxTime += maxRating * i;
    }
    // cout<<maxTime<<endl;
    int start = 0;
    int end = maxTime;
    int ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (possible(chefRating, mid, want))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
