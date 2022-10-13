// Binary search tree 

#include <bits/stdc++.h>
using namespace std ;

struct TreeNode {
    int val; 
    TreeNode*right, *left;
    TreeNode():val(0), right(nullptr), left(nullptr){}
    TreeNode(int val):val(0), right(nullptr), left(nullptr){}
    TreeNode(int val, TreeNode *right, TreeNode *left):val(0), right(right), left(left){}
};

class BST {
    TreeNode *root;
public: 
    BST(){
        root = nullptr;
    }
    
    void insertElement(int item) {
        TreeNode *q = new TreeNode(item);
        if (!root) {
            root = q;
            return;
        }
        TreeNode *prev = nullptr, *target = root;
        while(target){
            if (target->val == item) return;

            prev = target;
            if(target->val > item) {target = target->left;}
            else {target = target->right;}
        }

        if (prev->val > item) prev->left = q;
        else prev->right = q;
    }

    void traversal(){
        if (!root) return;
        inOrder(root);
        cout << endl;
    }

    void inOrder(TreeNode *root){
        if (!root) return;

        inOrder(root->left);
        cout << root->val << " ";
        inOrder(root->right);
        return;
    }
};

int main () {
    BST b1;
    b1.insertElement(32);
    b1.insertElement(21);
    b1.insertElement(17);
    b1.insertElement(20);
    b1.insertElement(33);
    b1.insertElement(35);

    b1.traversal();
    return 0;
}