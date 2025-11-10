/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root) {
    if(root == NULL) return 0;
    struct TreeNode *st1[50001];
    struct TreeNode *st2[50001];
    int t1 = -1, t2 = -1;
    st1[++t1] = root;
    while(t1 >= 0){
        struct TreeNode *curr = st1[t1--];
        st2[++t2] = curr;
        if(curr->left) st1[++t1] = curr->left;
        if(curr->right) st1[++t1] = curr->right;
    }
    return t2+1;
}