#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
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

Node *reverseLL(Node *&head)
{

    Node *prev = nullptr;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    head = prev;
    return prev;
}
void reverseLL2(Node *&head, Node *&prev)
{
    if (head == NULL)
    {
        return;
    }

    Node *forward = head->next;
    head->next = prev;
    prev = head;
    head = forward;
    reverseLL2(head, prev);
}

int main(int argc, char const *argv[])
{
    Node *node = new Node(1);
    Node *head = node;
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    print(head);
    Node *a = reverseLL(head);
    print(a);
    Node *prev = NULL;
    reverseLL2(head, prev);
    print(prev);
    return 0;
}
