#include <iostream>
using namespace std;
int findnum(int arr[][3], int row, int col, int target)
{

    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int rowMid = mid / col;
        int colMid = mid % row;
        if (arr[rowMid][colMid] == target)
        {
            cout<<"the row of the given target is "<<rowMid<<" and the column is ";
            return colMid;
        }
        else if (arr[rowMid][colMid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int targetnum = 6;
    int ans = findnum(arr, 3, 3, targetnum);
    if (ans == -1)
    {
        cout << "not found " << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}
