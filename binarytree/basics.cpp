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

node* buildTree(node* root){
    int data;
    cout << "enter" << endl;
    cin >> data;
    if(data == -1) {
        return NULL;
    }
    root = new node(data);
    cout << "enter data for left node of the data " << data << endl;
    root->left = buildTree(root->left);
    cout << "enter data for right node of the data " << data << endl;
    root->right = buildTree(root->right);
    return root;
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
    n = buildTree(n);
    levelOrderTraversal(n);
    return 0;
}