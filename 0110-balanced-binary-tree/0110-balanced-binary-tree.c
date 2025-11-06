/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int depth(struct TreeNode *root){
    if(root == NULL) return 0;
    int lh = depth(root->left);
    int rh = depth(root->right);
    return ((lh > rh ? lh : rh) + 1);
}

bool isBalanced(struct TreeNode* root) {
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL) return true;
    int l = depth(root->left);
    int r = depth(root->right);
    int diff = l - r;
    if(abs(diff) > 1) return false;
    return isBalanced(root->left) && isBalanced(root->right);
}