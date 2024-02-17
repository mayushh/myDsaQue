#include <iostream>
#include <vector>
using namespace std;
// this x function is to print all the indexes
void x(int a[], int i)
{
    if (i == 0)
    {
        return;
    }
    x(a, i - 1);
    cout << a[--i] << " ";
}
// maxi function is to find the maximum or biggest number in an array
int maxi(int a[], int i, int m)
{
    if (i == 0)
    {
        return m;
    }
    if (m < a[i - 1])
    {
        m = a[i - 1];
    }
    return maxi(a, i - 1, m);
}
// mini funtion is to find the minimum in an array
int mini(int a[], int i, int m)
{
    if (i == 0)
    {
        return m;
    }
    if (m > a[i - 1])
    {
        m = a[i - 1];
    }
    return mini(a, i - 1, m);
}
// isPresent is to find wheather a string had that character or not and storing it in vector
bool isPresent(string a, int i, char c, vector<int> &v)
{
    if (i >= a.length())
    {
        // cout << "not present" << endl;
        return false;
    }
    if (a[i] == c)
    {
        v.push_back(i);
    }
    return isPresent(a, i + 1, c, v);
}
// printdigit function is to print all the digit in a number input to the function
void printDigitHelper(string s, int i)
{
    if (i >= s.size())
    {
        return;
    }
    cout << s[i] << " ";
    printDigitHelper(s, i + 1);
}
void printDigit(int n)
{
    string s = to_string(n);
    if (n == 0)
    {
        return;
    }
    int k = n % 10;
    printDigit(n/10);
    cout << k << " ";
    // this code breaks when the input starts with 0 like 09378 for this i made another code printDigitHelper use that that won't break
   
}
int main(int argc, char const *argv[])
{
    // int a[10] = {11,22,33,44,55,66,77,88,99,10};
    // x(a, 10);
    // int ans = maxi(a,10,0);
    // int m = INT8_MAX;
    // int minimum = mini(a,10,m);
    // cout<<endl<<ans<<" "<<minimum<<endl;
    string name = "ashu";
    char c = 'k';
    vector<int> v;
    isPresent("ayushmalviya", 0, 'a', v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << "found at index " << v[i] << endl;
    }
    int num = 897;
    printDigit(num);

    return 0;
}
