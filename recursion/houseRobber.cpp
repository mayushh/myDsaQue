// this is same problem as maximum of non adjacent number
#include <iostream>
#include <vector>
using namespace std;
int houseRobber(vector<int> a,int i )
{
    if (i>=a.size())
    {
        return 0;
    }
    int sum = 0;
    sum = a[i]+ houseRobber(a,i+2);
    int total = houseRobber(a,i+1);
    return (total>sum)? total:sum;
}
int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 3, 1};
    int max =0;
    cout<<houseRobber(nums,0);

    return 0;
}
