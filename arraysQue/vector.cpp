#include<iostream>
#include <vector>
using namespace std;
int main (){


    vector <int> arr;
    arr.push_back(4);
    arr.push_back(4);
    arr.push_back(7);
    arr.push_back(5);
    arr.push_back(7);// this push_back function helps to push element to last, which is given as argument to thi function
    arr.pop_back();// this pop_back function helps to remove the last element of the vector
    for (int  i = 0; i < arr.size(); i++)
    {
       cout<<arr[i]<<" ";
       
    }
    vector <int> array(10,2);
    cout<<endl;
    // we can also initilize a vector 10 is the size or capacity of this vector and 2 will be the present in those 10 memory block by default
    // we can also initilize values
    vector <int> vec{10,20,30,40,50,60};
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    
}