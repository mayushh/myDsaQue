#include <iostream>
#include <vector>
using namespace std;
void sol(vector<vector<int>> &m, int &n, int i, int j, string path, string s, vector<string> &final)
{
    if (i < 0 || j < 0 || i >= n || j >= n || m[i][j] == 0)
    {
        return;
    }
    s += path;
    if (i == n - 1 && j == n - 1)
    {
        final.push_back(s);

        return;
    }

    m[i][j] = 0;
    sol(m, n, i + 1, j, "D",  s, final);
    sol(m, n, i, j + 1, "R",  s, final);
    sol(m, n, i - 1, j, "U",  s, final);
    sol(m, n, i, j - 1, "L",  s, final);
    m[i][j] = 1;
   
}

int main(int argc, char const *argv[])
{
     vector<vector<int>> maze =  {{1,1,1}, {1, 1, 1}, {1, 1,1}};
    int n = maze.size();
    int i = 0;
    int j = 0;
    string ans = "";
    vector<string>v;
    sol(maze, n, i, j, ans, "",v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<v.size();
    return 0;
}
