#include <iostream>
#include <vector>
using namespace std;
bool anagramCheck2(string a, string b)
{
    int freqTable[256] = {0}; // initilize all elements with 0
    for (int i = 0; i < a.size(); i++)
    {
        freqTable[a[i]]++;
    }
    for (int i = 0; i < b.size(); i++)
    {
        freqTable[b[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freqTable[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    vector<string> ana = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> final;
    for (int i = 0; i < ana.size(); i++)
    {
        vector<string> ans;
        ans.push_back(ana[i]);
        for (int j = i+1; j < ana.size(); j++)
        {
            if (i != j && anagramCheck2(ana[i], ana[j]))
            {
                ans.push_back(ana[j]);
                ana.erase(ana.begin() + j);
            }
        }
        final.push_back(ans);
    }
//    cout<<final[0][0];
   for (int i = 0; i < final.size(); i++)
   {
    cout<<"["<<" ";
    for (int k = 0; k < final[i].size(); k++)
    {
        cout<<final[i][k]<<" ";
    }
    cout<<"]"<<" ";
   }
   
    return 0;
}
