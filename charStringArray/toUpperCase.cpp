#include <iostream>
#include <string.h>
using namespace std;
void toUppercase(char arr[])
{
    for (int i = 0; i < 13; i++)
    {
        if (arr[i] != ' ' && (int)arr[i] > (int)'Z')
        {
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}
int main(int argc, char const *argv[])
{
    char arr[15] = "AyUsh malViYa";
    toUppercase(arr);
    cout << arr;
    // char z ;
    // z = 'g'-'a' + 'A';
    // cout<<z;

    return 0;
}
