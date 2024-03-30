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
bool isCircular(Node*&head){
    if (head == NULL)
    {
        return true;
    }
    if (head->next==NULL)
    {
        return false;
    }
    Node* temp = head->next;
    while (temp!=NULL && temp != head)
    {
        if (temp==NULL)
        {
            return false;
        }
        if (temp->next == head)
        {
           return true;
        }
        temp = temp->next;
    }
    return false;
}
int main(int argc, char const *argv[])
{
     Node* tail = NULL;

    print(tail);
    insertNode(tail,1,1);
    insertNode(tail,2,1);
    insertNode(tail,5,2);
    insertNode(tail,4,5);
    insertNode(tail,3,4);
    insertNode(tail,8,3);
    insertNode(tail,4,8);
    insertNode(tail,1,8);
    insertNode(tail,1,8);
    insertNode(tail,1,8);
    insertNode(tail,1,8);
    print(tail);
    bool x = isCircular(tail);
    if (x)
    {
        cout<<"circular";
    }
    else
    cout<<"nonCircular";
    return 0;
}
