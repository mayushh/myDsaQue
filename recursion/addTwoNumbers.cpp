// give two numbers in form of string you need to add them without converting them into integer and return a string which is addition of both the integer
#include<iostream>
#include<vector>
using namespace std;
void add(string& a, string& b,string& c,int ai, int bi,int car){
    if (ai<0 && bi < 0 && car ==0 )
    {
        return;
    }
     int sum = (ai >= 0 ? a[ai] - '0' : 0) + (bi >= 0 ? b[bi] - '0' : 0) + car;
   c.insert(c.begin(), sum%10 + '0');
   car = sum/10;

    add(a,b,c,ai-1,bi-1,car);
    
}
int main(int argc, char const *argv[])
{
    string a = "60";
    string b = "245";
    string c = "";
    int ai = a.length()-1;
    int bi = b.length()-1;
    int car = 0;
    add(a,b,c,ai,bi,car);
    cout<<c;
    return 0;
}
