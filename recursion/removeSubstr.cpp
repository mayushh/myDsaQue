#include<iostream>
#include<vector>
using namespace std;
void removeSubStr(string& a,string sub){
    int pos = a.find(sub);
    if (pos==string::npos)
    {
        return;
    }
    a.erase(pos,sub.length());
    removeSubStr(a,sub);
    
}
int main(int argc, char const *argv[])
{
    string a = "daabcbaabcbc";
    string sub = "abc";
    cout<<a<<endl;
    removeSubStr(a,sub);
    cout<<a<<endl;
    return 0;
}
