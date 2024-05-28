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

void leftNRightPrint(node* root){
    if(root == NULL)
    return;
    node*left = root->left;
    node*right = root->right;
        cout<<root->data<<" ";
     if(left!=NULL)
        leftNRightPrint(left);
        
     if(right!=NULL){
        leftNRightPrint(right);
    }




}

int main(){
    node* n = NULL;
    n = buildTree(n);
    leftNRightPrint(n);
    return 0;
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
