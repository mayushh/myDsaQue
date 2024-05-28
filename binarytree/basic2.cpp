#include<iostream>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;
    node(int val){
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void buildLevelWiseTree(node* &root){
   
   
   queue<node*>q;
   cout<<"enter root node value"<<endl;
   int data;
   cin>>data;
   root = new node(data);
   q.push(root);
   while(!q.empty()){   
    node* temp = q.front();
    q.pop();
    int  leftdata;
    cout<<"enter left data for "<<temp->data<<endl;
    cin>>leftdata;
    if (leftdata!=-1)
    {
        temp->left = new node(leftdata);
        q.push(temp->left); 
    }
    cout<<"enterright data for "<<temp->data<<endl;
    int rightdata;
    cin>>rightdata;
    if(rightdata!=-1){
        temp->right = new node(rightdata);
        q.push(temp->right);
    }

   }
    
}

void levelOrderTraversal(node* root){
    if (root == NULL) {
        return;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){

        node* temp = q.front();
        q.pop();
        if(temp == NULL){
                cout<<endl;
                if(!q.empty())
                q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        }
    }
}

int main(){
    node* n = NULL;
    buildLevelWiseTree(n);
    levelOrderTraversal(n);
    return 0;
}