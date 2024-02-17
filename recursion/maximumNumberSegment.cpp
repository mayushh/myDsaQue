#include <iostream>
#include <vector>
using namespace std;
int maxSegments2(int length, int x, int y, int z)
{
    // base case 
    if (length == 0)
    {
        return 0;
    }
    if (length < 0)
    {
        return INT16_MIN;
    }
    // procedure or recursion
    int n = INT16_MIN;
    int a, b, c;
    a = maxSegments2(length - x, x, y, z);

    if (length - x >= 0)
    {
        a++;
    }
    b = maxSegments2(length - y, x, y, z);

    if (length - y >= 0)
    {
        b++;
    }
    c = maxSegments2(length - z, x, y, z);

    if (length - z >= 0)
    {
        c++;
    }

    n = max(a, max(b, c));
    
    return n;
}
// if input is integer vector like if lengths are given in the vector 
int maxSegments(vector<int> a, int length)
{
    if (length == 0)
    {
        return 0;
    }
    if (length < 0)
    {
        return -1;
    }

    int n = INT16_MIN;
    for (int i = 0; i < a.size(); i++)
    {
        
        int l = maxSegments(a, length - a[i]);
        if (l >= 0)
        {
            l++;
            // here we are doing l++ because it show we got a possible segment
            n = max(l, n);
        }
    }
    return n;
}
int main(int argc, char const *argv[])
{
    vector<int> a = { 2, 2, 5};
    int length = 21;
    cout << maxSegments(a, length) << endl;
    cout << maxSegments2(length, 2, 2, 5);
    return 0;
}
