#include <iostream>
using namespace std;
#include <vector>
int lastOccuranceChar2(vector<char>&a,char x ,int i){
     if (i <0)
    {
        return -1;
    }

    if (a[i] == x)
    {
        return i;
       
    }  
     return lastOccuranceChar2(a, x, i - 1);
}
int lastOccuranceChar(vector<char>& a, int x, int i,int& ans)
{
    
    if (i == a.size())
    {
        return -1;
    }

    if (a[i] == x)
    {
        ans = i;
       
    }  
     return lastOccuranceChar(a, x, i + 1,ans);
    
}
int main(int argc, char const *argv[])
{
    vector<char> a = {'a', 'v', 'e', 'e', 'y', 'o','y',  'a', 'd', 'f'};
    char x = 'y';
    // fint the last index of character x;
    int j ;
    lastOccuranceChar(a, x, 0,j);// this function will search from the start then stores index when we found the  the char after iterating whole index last value will be saved in j and then we print it
    cout<<j<<endl;
    cout<<lastOccuranceChar2(a,x,a.size()); // this function will search from last if found return that value cause 1st from last is last from first;
    return 0;
}
