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
struct TreeNode *st[100];
int top = -1;

void push(struct TreeNode *temp){
    st[++(top)] = temp;
}

struct TreeNode* pop(){
    return st[(top)--];
}

int isempty(){
    return((top) == -1);
}

void preorder(struct TreeNode *root, int *arr,int *c)
{
    if (root == NULL)
        return;
    top = -1;
    push(root);
    while (!isempty())
    {
        struct TreeNode *curr = pop();
        arr[(*c)++] = curr->val;
        if (curr->right)
            push(curr->right);
        if (curr->left)
            push(curr->left);
    }
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr = (int *)malloc(100*sizeof(int));
    int c = 0;
    preorder(root,arr,&c);
    *returnSize = c;
    return arr;
}