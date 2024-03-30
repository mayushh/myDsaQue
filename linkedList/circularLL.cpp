#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    // destructor
    ~Node(){
       int value =  this->data;
       delete next;
       cout<<"node of value "<<value<<" has been deleted"<<endl;
    }
};
void print(Node*&tail){
    if (tail == NULL)
    {
        cout<<"empty list"<<endl;
        return;
    }
     Node* temp = tail;
    if (temp ==tail->next)
    {
        cout<<temp->data<<endl;
        return;
    }
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;    
    } while (temp!=tail);
    cout<<endl;
    
}
void insertNode(Node*&tail,int d,int element){
    if (tail == NULL)
    {
        Node* newNode = new Node(d);
        newNode->next = newNode;
        tail = newNode;
        return;
    }
    Node* temp = new Node(d);
    Node* curr = tail;
    while (curr->data != element)
    {
        curr = curr->next;
        if (curr == tail)
        {
            cout<<"no element found to insert after"<<endl;
            return;
        }
    }
    temp->next= curr->next;
    curr->next = temp;
    return;
    
}
void deleteNode(Node*&tail,int element){
    if (tail->data == element)
    {
        tail=tail->next;
    }
     if (tail==NULL)
    {
        cout<<"empty list"<<endl;
    }
    Node*temp = tail;
    Node*prev = tail;
    
    
    
    while (temp->data != element )
    {
        if (temp->next == tail)
        {
            cout<<"no element found to be deleted"<<endl;
            return;
        }
        prev = temp;
        temp = temp->next;
        
        
        
    }
    
    prev->next = temp->next;
    temp->next = NULL;
    delete temp;


    
    
}
int main(int argc, char const *argv[])
{
    Node* tail = NULL;
    print(tail);
    insertNode(tail,4,1);
    
    insertNode(tail,9,4);
    print(tail);
    insertNode(tail,11,4);
    print(tail);
    insertNode(tail,18,9);
    print(tail);
    deleteNode(tail,4);
    // tail = tail->next;
    print(tail);
    return 0;
}
