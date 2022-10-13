// Binary Tree Creation

#include <bits/stdc++.h>
using namespace std ;

struct TreeNode {
    int val; 
    TreeNode*right, *left;
    TreeNode():val(0), right(nullptr), left(nullptr){}
    TreeNode(int val):val(val), right(nullptr), left(nullptr){}
    TreeNode(int val, TreeNode *right, TreeNode *left):val(val), right(right), left(left){}
};

class BT{
    TreeNode* root;

    // Important to balance the tree
    queue<TreeNode*> link;
public: 
    BT(){
        root = nullptr;
    }

    void insertElement(int val){
        TreeNode *q = new TreeNode(val);
        if (!root) {
            link.push(q);
            root = q;
            return;
        }

        TreeNode *temp = link.front();
        link.push(q);
        if (!temp->left) {
            temp->left = q;
            return;
        }
        if (!temp->right){
            temp->right = q;
            link.pop();
        }
    }

    void traversal(TreeNode *root){
        if (!root) return;

        cout << root->val << " ";
        traversal(root->left);
        traversal(root->right);
    }
};

int main () {
    
    return 0;
}