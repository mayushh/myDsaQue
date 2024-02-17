#include <iostream>
using namespace std;

void sequenceSubstr(string &a, int i, string sub)
{
   if (i>=a.length())
   {
    cout<<sub<<endl;
    return;
   }
   // exclude call;
   sequenceSubstr(a, i + 1,  sub);
   
   // include call;
    sub.push_back(a[i]);
   sequenceSubstr(a,i+1,sub);
        
    
   
}
int main(int argc, char const *argv[])
{
    string a = "ayu";
    string sub = "";
    int j = 0;
    int i = 0;
    sequenceSubstr(a, i, sub);
    return 0;
}
