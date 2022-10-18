// BST Deletion

#include <bits/stdc++.h>
using namespace std ;

struct TreeNode {
    int val; 
    TreeNode*right, *left;
    TreeNode():val(0), right(nullptr), left(nullptr){}
    TreeNode(int val):val(val), right(nullptr), left(nullptr){}
    TreeNode(int val, TreeNode *right, TreeNode *left):val(val), right(right), left(left){}
};

class BST {
    TreeNode *root;
public: 
    BST(){
        root = nullptr;
    }

    pair<TreeNode*, TreeNode*> searchElement(int item){
        if (!root) return pair(nullptr, nullptr);
        TreeNode *prev = nullptr, *target = root;

        while(target) {
            if (target->val == item) break;
            prev = target;
            if (target->val > item) target = target->left;
            else target = target->right;
        }

        return pair(prev, target);
    }

    void caseA(TreeNode *parent, TreeNode *target){
        
    }
    void caseB(TreeNode *parent, TreeNode *target){
        TreeNode *child = nullptr;
        if (target->left) child = target->left;
        else child = target->right;

        if (parent) {
            if (target == parent->left) parent->left = child;
            else parent->right = child;
        }
        else {
            root = child;
        }
        return;
    }

    void delteElement(int item) {
        if(!root) return;

        pair<TreeNode *, TreeNode*> p = searchElement(item);
        TreeNode *parent = p.first, *target = p.second;

        if(!target) return;
        // CaseA: target has two child
        if (target->left && target->right){

        }
        // CaseB: target has less than 2 child
        else {
            caseB(parent, target);
        }
    }
};

int main () {
    
    return 0;
}