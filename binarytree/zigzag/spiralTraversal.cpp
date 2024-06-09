#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node *buildTree(node *root)
{
    int data;
    cout << "enter" << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);
    cout << "enter data for left node of the data " << data << endl;
    root->left = buildTree(root->left);
    cout << "enter data for right node of the data " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void spiralTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    bool a = true;
    while (!q.empty())
    {
        node*temp = q.front();
        if (q.front()!=NULL)
        {
            cout<<temp->data<<" ";
        }

        q.pop();
        
        if (a)
        {
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            a = false;
        }
        else{
             if (temp->left != NULL)
            {
                q.push(temp->left);
            }
              if (temp->right != NULL)
            {
                q.push(temp->right);
            }
            a = true;
        }
    }
}

int main()
{
    node *n = NULL;
    n = buildTree(n);
    spiralTraversal(n);
    return 0;
}