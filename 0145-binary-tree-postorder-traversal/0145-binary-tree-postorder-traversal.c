/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void postorder(struct TreeNode* root,int *arr, int *c){
    if(root == NULL) return;
    struct TreeNode *st1[100], *st2[100];
    int t1 = -1, t2 = -1;
    st1[++t1] = root;
    while(t1 >= 0){
        struct TreeNode *temp = st1[t1--]; 
        st2[++t2] = temp;
        if(temp->left) st1[++t1] = temp->left;
        if(temp->right) st1[++t1] = temp->right;
    }
    while(t2 >= 0){
        arr[(*c)++] = st2[t2--]->val;
    }
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int c = 0;
    int *arr = (int *)malloc(100*sizeof(int));
    postorder(root,arr,&c);
    *returnSize = c;
    return arr;
}