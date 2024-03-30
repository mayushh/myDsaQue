#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // constructor
    Node(int d){
        this-> data = d;
        this-> next = NULL;
    }
    // destructor if we want to delete a node
    ~Node(){
        int value = this->data;
       delete next;
        cout<<"memory is free for value"<<value<<endl;
        
    }
   
};
 void insertAtHead(Node*& head, int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
    void insertAtTail(Node*&tail, int data){
        Node*temp = new Node(data);
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
            for (int i = 0; i < pos - 2 && p != NULL; i++)
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
    void deleteNode(Node*&head,int pos, Node*&tail){
        if (pos==1)
        {
             Node*temp = head;
             head = head->next;
             temp->next = NULL;
             delete(temp);
             return;

        }
        Node*temp = head;
        
        int count = 1;
        
       while (count<pos-1)
       {
            temp = temp->next;
            if (count+1==pos-1)
            {
                tail = temp;
            }                       
            if (temp->next == NULL)
            {
                cout<<"incorrect position"<<endl;
                return;
            }
            count++;
       }
       
           

            Node*temp2 = temp->next;
            temp->next=temp2->next;
            temp2->next = NULL;
            delete(temp2);
}
    void print (Node*&head){
        Node*temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
int main(int argc, char const *argv[])
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;
    // cout<<head->data;
    insertAtTail(tail, 2);  // Corrected
    insertAtTail(tail, 5);  // Corrected
    insertAtTail(tail, 1);  // Corrected
    insertAtTail(tail, 6);  // Corrected
    insertAtTail(tail, 5);  // Corrected
    insertAtTail(tail, 4);  // Corrected
    insertAtTail(tail, 1);  // Corrected
    insertAtTail(tail, 0);  // Corrected
    insertAtTail(tail, 7);  // Corrected
   print(head);
    deleteNode(head,10,tail);
   print(head);
   cout<<tail->data;

    return 0;
}