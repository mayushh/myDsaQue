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
    void insertAtpos(Node *&head, int pos, int d,Node *&tail)
    {
        {
            /* code */
        }
        
        if (pos == 1)
        {
            //   Node *temp = new Node(d);
            //   temp->next = head;
            //   head = temp; do this or just
            insertAtHead(head, d);
        }
        else
        {
            Node *p = head;
            Node *temp = new Node(d);
            for (int i = 1; i < pos - 1 && p != NULL; i++)
            {
                p = p->next;
            }
            if (p == NULL)
            {
                // The position is beyond the length of the list
                cout << "Position out of bounds." << endl;
                delete temp; // Free the memory allocated for the new node
                return;
            }
             if (p->next == NULL)
            {
                insertAtTail(tail,d);
                return;
            }
            temp->next = p->next;
            p->next = temp;
           
            
        }
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
};
int main(int argc, char const *argv[])
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;
    // cout<<head->data;
    node1->insertAtTail(tail, 2);  // Corrected
    node1->insertAtTail(tail, 5);  // Corrected
    node1->insertAtTail(tail, 8);  // Corrected
    node1->insertAtTail(tail, 10); // Corrected
    node1->insertAtTail(tail, 90); // Corrected
    node1->print(head);            // Corrected
    int pos = 2;                   // 4th position means after 3rd node
    node1->insertAtpos(head, 2, 11,tail);
    node1->print(head); // Corrected
    node1->insertAtTail(tail, 9); // Corrected
    node1->insertAtTail(tail, 29); // Corrected
    node1->print(head); // Corrected
    node1->insertAtpos(head, 10, 11,tail);
    node1->print(head); // Corrected


    return 0;
}
