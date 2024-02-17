#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> array= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,20};
    int target = 11;
    int initial=0 ;
    int final=15;
    for (int i = 1; i < array.size();  i = i*2)
    {
        if (array[i] <= target)
        {
            initial = i;
        }
        
        else{
            final = i;
            cout<<"hello"<<endl;
        }
        
        
    }
    // cout<<initial<<" "<<final;
    //  we do binary search
    while (initial<=final)
    {
        int mid = initial + (final-initial)/2;
        if (array[mid]==target)
        {
            cout<<initial;
            break;
        }
        
        else if (array[mid]<target)
        {
            initial = mid +1;
            
        }
        else{
           
            final = mid-1;
            
        }
        
    }
    

    
    return 0;
}
