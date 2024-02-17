// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int find(string s, string f){
    int i = 0;
    int j = 0;
    int count = 0;
    int ans ;
    while(i<s.length()){
        if(s[i]== f[j]){
            count++;
            ans = i;
            i++;
            j++;
            
        }
        else {
            i++;
        }
    }
    if(count == f.length()){
        // ans is the index in s string but for the last letter of f ;
        return ans + 1 - f.length();
    }
    else{
        return 0;
    }
    
}
int main() {
string s = "ayush malviya";
string f = "iy";
int n = find(s, f);
if (n)
{
    cout<<n<<endl;
}
else{
    cout<<"not present"<<endl;
}
string z = "fya";
if (find(s,z))
{
    cout<<find(s,z)<<endl;
}
else{
    cout<<"notpresent"<<endl;
}

    return 0;
}