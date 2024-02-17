#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> arr = {2,1,3,4,2,2};
   
    bool x = false;    
         for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                cout<< " found it "<< arr[i];
                x =  true;
                break;
                
            }
            
        }
        if (x==true)
        {
            break;
        }
        

        
    
    }
    
    
    return 0;
}
