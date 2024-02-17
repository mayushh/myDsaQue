#include <iostream>
#include <string.h>
#include <vector>
#include<algorithm>
using namespace std;
int miniMinuteDiff(string time[], int size)
{
    vector<int> totalminutes;
    int t;
    //loop below is for converting string array to integer array
    for (int i = 0; i < size; i++)
    {
        int hours = stoi(time[i].substr(0, 2));
        int minutes = stoi(time[i].substr(3, 2));
        t = hours * 60 + minutes;
        totalminutes.push_back(t);
    }
    // sort function below to make totalminutes array in increasing order
    sort(totalminutes.begin(), totalminutes.end());
    int mini = INT8_MAX;
    int n = totalminutes.size();
    // this is the main loop
    for(int i = 0 ; i < size-1; i++){
        
        int diff = totalminutes[i+1] - totalminutes[i]; 
        mini = min(diff, mini); 
        
    }
    int lastDiff = totalminutes[0]+1440 - totalminutes[size-1];// if you want to make it as for 12 hours clock cycle then add 720 instead of 1440
    mini = min(mini,lastDiff);
    return mini;
}
int main(int argc, char const *argv[])
{
    string time[3] = {"10:59", "00:48", "04:19"};// use time in 24 hours cycle like use 3pm as 15:00
    int size = sizeof(time) / sizeof(time[0]);
    int diff = miniMinuteDiff(time, size);
    cout << diff;
    return 0;
}
