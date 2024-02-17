#include <iostream>
#include <vector>
using namespace std;
int solve2(vector<int> a, int target, int output, int count)
{
    if (output == target)
    {
        return count;
    }

    if (output > target)
    {
        return -1;
    }

    int minCount = INT16_MAX;

    for (int i = 0; i < a.size(); i++)
    {
        int ans = solve2(a, target, output + a[i], count + 1);

        if (ans != -1)
        {
            minCount = min(minCount, ans);
        }
    }

    return  minCount;
}
int minimunOfElement(vector<int>a, int target){

    if (target == 0)
    {
        return 0;
    }
    if (target < 0 )
    {
        return -1;
    }
    int mini = INT16_MAX;
    for (int i = 0; i < a.size(); i++)
    {
        int ans = minimunOfElement(a,target-a[i]);
        if (ans!=-1)
        {
             mini = min(mini,ans+1);
        }
    }
    
    return mini;
    
}
int main(int argc, char const *argv[])
{
    vector<int> a = {1, 2, 3 };
    int target = 10;
    int mini = INT16_MAX;
    cout << minimunOfElement(a, target)<<endl;
    cout << solve2(a, target,0,0);
    return 0;
}
