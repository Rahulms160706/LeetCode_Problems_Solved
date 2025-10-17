/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int f;

void preorder(struct TreeNode *t1,struct TreeNode *t2){
    if(t1 == NULL && t2 == NULL) return;
    else if(t1 == NULL || t2 == NULL){ f = 0; return; }
    else{
        if(t1->val != t2->val){ f = 0; return; }
        preorder(t1->left, t2->right);
        preorder(t1->right, t2->left);
    }
}

bool isSymmetric(struct TreeNode* root) {
    struct TreeNode *t1 = root->left;
    struct TreeNode *t2 = root->right;
    if(t1 == NULL && t2 == NULL) return true;
    else if(t1 == NULL) return false;
    else if(t2 == NULL) return false;
    f = 1;
    preorder(t1,t2);
    if(f == 0) return false;
    else return true;
}