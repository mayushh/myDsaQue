#include <iostream>
using namespace std;
// in this question we need to reverse linkedlist in groups
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    // destructor if we want to delete a node
    ~Node()
    {
        int value = this->data;
        delete next;
        cout << "memory is free for value" << value << endl;
    }
};
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node* reverseLL(Node *&head, int key)
{
    if (head == NULL )
    {
        return NULL;
    }
    int count = 0;
    Node* forward = NULL;
    Node* prev = NULL;
    Node*temp = head;
    while (count<key && temp != NULL)
    {
        forward = temp->next;
        temp->next = prev;
        prev = temp;
        temp = forward;
        count++;
    }
    if (forward != NULL)
    {
        head->next = reverseLL(forward,key);
    }
    return prev;
    
        
}
int main(int argc, char const *argv[])
{
    Node *node1 = new Node(7);
    Node *head = node1;
    Node *tail = node1;
    // cout<<head->data;
    insertAtTail(tail, 2); //
    insertAtTail(tail, 9); //
    insertAtTail(tail, 6); //
    insertAtTail(tail, 5); //
    insertAtTail(tail, 4); //
    insertAtTail(tail, 1); //
    print(head);
    Node* x = reverseLL(head, 3);
    print(x);
    return 0;
}
