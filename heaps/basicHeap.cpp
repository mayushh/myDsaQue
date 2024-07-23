#include <iostream>
#include <queue>
using namespace std;
// creating MAX heap
class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        size = 0;
        arr[0] = -1;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[size] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[index] > arr[parent])
            {
                swap(arr[index], arr[parent]);
                index = parent;
                // cout<<index<<" ";""
            }
            else
                return;
        }
    }
    void p()
    {
        if (size == 0)
        {
            cout << "empty heap" << endl;
            return;
        }
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
    void print()
    {
        if (size == 0)
        {
            cout << "empty heap" << endl;
            return;
        }
        queue<int> q;
        q.push(1);
        while (!q.empty())
        {
            int p = q.front();
            q.pop();
            cout << arr[p] << " ";
            if (p * 2 <= size)
            {
                q.push(p * 2);
            }
            if (p * 2 + 1 <= size)
            {
                q.push(p * 2 + 1);
            }
        }
        cout<<endl;
    }
    void deletefromheap()
    {
        if (size == 0)
        {
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i <= size)
        {
            int child = -1;
            if (i * 2 + 1 <= size)
            {
                // Both children are within bounds
                child = arr[i * 2] > arr[i * 2 + 1] ? i * 2 : i * 2 + 1;
            }
            else
            {
                // Only left child is within bounds
                child = i * 2;
            }
            if (arr[i] < arr[child])
            {
                swap(arr[i], arr[child]);
            }
            else 
            return;
        }
    }
};
int main(int argc, char const *argv[])
{
    heap h;
    h.insert(10);
    h.insert(1);
    h.insert(20);
    h.insert(11);
    h.insert(9);
    h.insert(4);
    h.insert(80);
    h.print();
    h.deletefromheap();
    h.print();
    h.deletefromheap();
    h.print();
    return 0;
}
