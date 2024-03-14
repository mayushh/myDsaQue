#include <iostream>
#include <vector>
using namespace std;
vector<int> mergeSort(vector<int> &a, int s, int e)
{

    if (s == e)
    {
        vector<int> singleElementArray;
        singleElementArray.push_back(a[s]);
        return singleElementArray;
    }
   
    int mid = s - (s - e) / 2;

    vector<int> ax = mergeSort(a, s, mid);
    vector<int> b = mergeSort(a, mid + 1, e);
    vector<int> ans;
    int i = 0, j = 0;
    while (i < ax.size() || j < b.size())

    {
        if (j == b.size())
        {
            ans.push_back(ax[i]);
            i++;
        }
        else if (i == ax.size())
        {
            ans.push_back(b[j]);
            j++;
        }
        else
        {
            if (ax[i] > b[j])
            {
                ans.push_back(b[j]);
                j++;
            }
            else
            {

                ans.push_back(ax[i]);
                i++;
            }
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {3, 5, 7, 6, 9,3, 1};
    int mid = 2;
    vector<int> ans = mergeSort(arr, 0, 6);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
//  if (j < b.size() && (i == ax.size() || ax[i] > b[j]))
//         {
//             ans.push_back(b[j]);
//             j++;
//         }
//         else
//         {
//             ans.push_back(ax[i]);
//             i++;
//         }