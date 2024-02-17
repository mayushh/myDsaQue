#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 4;

    int k = 0;

    int a[] = {12, 34, 67, 90};
    vector<int> m;
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        int m1 = 0;
        int m2 = 0;
        k++;
        for (int j = 0; j < k; j++)
        {
            m1 = a[j] + m1;
        }
        for (int j = k; j < n; j++)
        {
            m2 = a[j] + m2;
        }
        // cout<<"book allocated to student m1 is "<<m1<<" and to two is "<<m2<<endl;
        m.push_back(abs(m1 - m2));
        if (m1 > m2)
        {
            ans.push_back(m1);
        }
        else
        {
            ans.push_back(m2);
        }
    }
    int answer = 0;
    int key;
    for (int i = 0; i < m.size() - 1; i++)
    {
        if (m[i] < answer)
        {
            answer = m[i];
            key = i;
        }
        else
        {
            answer = m[i + 1];
            key = i + 1;
        }
    }
    cout << ans[key];

    return 0;
}
