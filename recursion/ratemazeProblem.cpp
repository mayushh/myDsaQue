#include <iostream>
#include <vector>
using namespace std;
void sol(vector<vector<int>> &a, int &n, int i, int j, string ans, string path, vector<string> &final)
{

      if (i < 0 || i >= n || j < 0 || j >= n || a[i][j] == 0)
    {
        return;
    }

        ans += path;
    
    if (i == n - 1 && j == n - 1)
    {
        final.push_back(ans);        
        return ;
    }
    a[i][j] = 0;
    sol(a, n, i + 1, j, ans, "D",final);
    sol(a, n, i, j + 1, ans, "R",final);
    sol(a, n, i - 1, j, ans, "U",final);
    sol(a, n, i, j - 1, ans, "L",final);
    a[i][j] = 1;

}

int main(int argc, char const *argv[])
{
    vector<vector<int>> maze =  {{1,1,1}, {1, 1, 1}, {1, 1,1}};
    int n = maze.size();
    int i = 0;
    int j = 0;
    string ans = "";
    vector<string>v;
    string s = "abcd";
    string a = "c";
    int pos = s.find(a);
    cout<<pos;

    
    return 0;
}
