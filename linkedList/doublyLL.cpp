#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node* next ;
    Node* prev;
    // constructor ;
    Node( int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
        
    }
     ~Node(){
        int value = this->data;
       delete next;
        cout<<"memory is free for value "<<value<<endl;
        
    }
};
void insertAthead(Node*&head,int data){
    Node* node = new Node(data);
    node->next = head;
    head->prev = node;
    head = node;
    
}
void insertAtTail(Node*&tail,int data){
    Node* node = new Node(data);
    node->prev = tail;
    tail->next = node;
    tail = node;
    
}
int getLen(Node*&head){
    Node*temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;

    }
    return count;
}
void insertAtPos(Node*&head, Node*&tail,int pos, int d){
    if (pos == 1)
    {
        insertAthead(head,d);
        return;
    }
    Node* curr = new Node(d);
    int cnt = 1;
    Node* temp = head;
    while (cnt<pos-1 )
    {
        if (temp->next==NULL)
        {
            cout<<"choose between 1 to "<<cnt+1<< "th position "<<endl;
            return;
        }
        
        temp = temp->next;
        cnt++;
    }
    if (temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    
    temp->next->prev = curr;
    curr->next = temp->next;
    temp->next = curr;
    
    
}
void print(Node*&head){
    Node*temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}
void deleteNode(Node*& head, Node*&tail, int pos){
    if (pos == 1)
    {
        Node*temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    Node*temp = head;
    int count = 1;
    while (count < pos)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL)
    {
        cout<<"wrong position"<<endl;
        return;
    }
    if (temp->next==NULL)
    {
        temp->prev->next = NULL;
        tail = temp->prev;
        temp->prev = NULL;
        delete temp;
        return;
    }
    
    
    
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
    
    
    
}
int main(int argc, char const *argv[])
{
    Node *node1 = new Node(89);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAthead(head,10);
    insertAtTail(tail,6);
    insertAtTail(tail,1);
    insertAtTail(tail,2);
    print(head);
    cout<<"currently the value of head is "<<head->data<<endl;
    cout<<"currently the value of tail is "<<tail->data<<endl;
    cout<<"currently the length of this linkedlist is "<<getLen(head)<<endl;
    insertAtPos(head,tail,7,99);
    insertAtPos(head,tail,9,98);
    print(head);
    deleteNode(head,tail,4);
    print(head);
    print(head);

    return 0;
}
