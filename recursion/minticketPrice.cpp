#include <iostream>
#include <vector>
using namespace std;
int minTicketPrice(vector<int> &days, vector<int> &prices, int i)
{
    if (i >= days.size())
    {
        return 0;
    }

    // base case
    int cost1 = prices[0] + minTicketPrice(days, prices, i + 1);

    int passEndDay = days[i] + 6;
    int j = i;
    while (j < days.size() && passEndDay >= days[j])
    {
        j++;
    }
    int cost2 = prices[1] + minTicketPrice(days, prices, j);

     passEndDay = days[i] + 29;
     j = i;
    while (j < days.size() && passEndDay >= days[j])
    {
        j++;
    }
    int cost3 = prices[2] + minTicketPrice(days, prices,j);
    return min(cost1,min(cost2,cost3));
}
int main(int argc, char const *argv[])
{
    vector<int> days = {1, 4, 6, 5, 7,8};
    vector<int> prices{2, 7, 15};
    cout << minTicketPrice(days, prices, 0);
    return 0;
}
