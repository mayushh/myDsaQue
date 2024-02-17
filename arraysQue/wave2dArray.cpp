#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<vector<int>> brr;
    vector<int> a{2, 4, 6, 1};
    vector<int> b{1, 2, 3, 4};
    vector<int> c{2, 3, 4, 1};
    vector<int> d{8, 4, 5, 2};
    brr.push_back(a);
    brr.push_back(b);
    brr.push_back(c);
    brr.push_back(d);
    // for (int i = 0; i < brr.size(); i++)
    // {
    //     for (int j = 0; j < brr[i].size(); j++)
    //     {
    //         int x = brr[i].size()-1;
    //         if (i%2==0)
    //         {
    //            cout<<brr[i][j]<<" ";
    //         }
    //         else{

    //          cout<<brr[i][x-j]<<" ";
    //         }
    //     }

    //     cout<<endl;

    // }
    int col = brr[1].size(); // row for column
    int row = brr.size();
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            int x = row - 1;
            if (j % 2 == 0)
            {
                cout << brr[j][i] << " ";
            }
            else
            {
                cout << brr[j][x - i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
