#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // unordered map has constant time complexity for insertion deletion and finding;
    // ordered map like map<int,int> this have O(logn) time complexity
        unordered_map<string,int>m;
        m.insert({"ayush",100});
        // or 
        pair<string,int>p = {"bittu",90};
        m.insert(p);
        // or
        m["hariom"] = 70;
        cout<<m.at("hariom")<<endl;
        cout<<m["bittu"]<<endl;
        cout<<m["uninserted"]<<endl;// no entry has been made for this key but this will create a key in map and output will be default 0 
        // cout<<m.at("uninserted2")<<endl; // no entry has been made for this name this will throw an error;
        cout<<m.count("uninserted2")<<endl;// if entry is there then it will show the value else it will output 0 but no entry will be made;
        cout<<m["ayush"]<<endl;
        unordered_map<string,int> :: iterator it = m.begin();
        while (it!=m.end())
        {
            cout<<it->first<<" "<<it->second<<endl;
            it++;
        }
        



}