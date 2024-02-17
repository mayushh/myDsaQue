#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> a = {1,5,10,20,40,80};
    vector<int> b = {6,7,20,80,100};
    vector<int> c = {3,4,15,20,30,70,80,120};
    int x = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    while (k < c.size())
    {
        if (a[i]==b[j]&&b[j]==c[k])
        {
            cout<<a[i]<<"  ";
            i++;
            j++;
            k++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[k]){
            j++;
        }
        else if(c[k]<b[j]) {
            k++;
        }
      
      
        
        x++;
    }
    
    return 0;
}
