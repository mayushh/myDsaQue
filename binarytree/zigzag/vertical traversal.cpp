#include<iostream>
#include<vector>

using namespace std;
class TreeNode{
        public:
        TreeNode *left;
        TreeNode *right;
        int val;
};

class Solution {
public:
 int left(TreeNode*root,int& count){
        if(root == NULL)
            return count;
        int a =0;
        int b=0;
        if(root->left)
        a = left(root->left,count)-1;
        else
        b = left(root->right,count)+1;
        count = min(min(a,b),count);
        return  count;
    }
    int right(TreeNode*root,int& count){
        if(root == NULL)
            return count;
        int a =0;
        int b=0;
        if(root->right)
        a = right(root->right,count)+1;
        else
        b = right(root->left,count)-1;
        count = max(max(a,b),count);
        return  count;
    }
    void finder(TreeNode*root, int val,vector<int>&a,int count){
        if(root==NULL)
            return;
        if(count == val){
            a.push_back(root->val);
        }
        finder(root->left,val, a, count-1);
        finder(root->right,val,a,count+1);
        
            
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
         vector<vector<int>>ans;
        int count = 0;
        int leftExt = left(root,count);
        count = 0;
        int rightExt = right(root,count);
        for(int i = leftExt ;i < rightExt + 1;i++){
            vector<int>a ;
            finder(root,i,a,0);
            // sort(a.begin(),a.end());
            if(a.size()!=0)
            ans.push_back(a);
        }
        return ans;
    }
};
int  main(int argc, const char** argv) {
    return 0;
}