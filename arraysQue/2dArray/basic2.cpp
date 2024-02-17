#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <vector<int> > brr;
    // this is how we initilize an array
    vector <int> a{1,2,3};
    vector <int> b{1,2,3};
    vector <int> c{1,2,3};
    vector <int> d{1,2,3};
    brr.push_back(a);
    brr.push_back(b);
    brr.push_back(c);
    brr.push_back(d);

    // another way to initilize an 2d array with same values

    int col = 4;
    int row = 5;
    vector <vector<int> > arr(row , vector<int> (col, -1));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = 0; j < brr[i].size(); j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
