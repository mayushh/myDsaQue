#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    // guys i literally tried to solved to straigth 1 hours even the approach was correct the answer was never 
    // today i literally solved it under  5 minutes cause there was  a error in code 
    // i wrote j=1 for nested loop so arr[0] was never been used now i corrected it
   
    vector<int> arr = {1, 4, 5, 4, 3};
   for (int i = 1; i <= arr.size(); i++)
   {
     bool x = true;
    int count=0;
        for (int j = 0; j < arr.size(); j++)
        {
            
            if (i!=arr[j])
            {
                x = false;
                count++;
            }
            else{
                break;
            }
            
            
        }
        
        //  cout<<" "<<count<<" "<<endl;
       if (count==5)
       {
        cout<<i<<" "<<endl;
        break;
       }
       

        
   }
   
    
    return 0;
}
