#include<iostream>
#include<vector>
using namespace std;
int main(){
    // sort in order that first all zeros will occour and then all one
    vector <int> arr {1,1,0,0,0,1,0,1,1,0,0,0,1};
    int end = arr.size()-1;
    int start = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        // if (arr[i]==1)
        // {
        //     swap(arr[i], arr[end]);
        //     // no need to write end--
        // }
        // the above code is not required because we can just put all zeros in front and all one will be automatically rearranged to the end
        if (arr[i]==0)
        {
            swap(arr[i], arr[start]);
            start++;
        }
        // the code below will help to make you learn how swap function works 
        // cout<<endl<<"   before swap"<<endl;
        // for (int i = 0; i < arr.size(); i++)
        // {
        //      cout<<" "<<arr[i];
        // }
        
    }
    cout<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<" "<<arr[i];
    }
    
    
cout<<endl;



// the above code is also a solution but cheap 
// because me stored all zeros and one in another array sequence wise hehe ;)
cout<<endl<<"another solution but same ans below"<<endl;

    vector <int> array;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==0){
            array.push_back(arr[i]);
        }
      
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==1){
            array.push_back(arr[i]);
        }
      
    }


    for (int i = 0; i < array.size(); i++)
    {
        cout<<array[i]<<" ";
    }
    
    
}