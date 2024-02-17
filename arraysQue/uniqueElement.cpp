#include <iostream>
#include <vector>
using namespace std;
int main()
{
// we need to find the element which does not repeat
    vector<int> arr{1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};
    
    int ans = 0;
    for (int i = 0; i <arr.size(); i++)
    {
       ans = ans ^ arr[i];
    }
    cout<<ans<<endl;
//   vector<int> arr{1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};

   for (int i = 0; i < arr.size(); i++) {
        bool found = false;

        for (int j = 0; j < arr.size(); j++) {
            if (arr[i] == arr[j]&&i != j ) {
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "The element that does not repeat is: " << arr[i] << endl;
            break; // Once you find the first non-repeating element, you can exit the loop
        }
   }
    


}