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

struct TreeNode *a[100];
int top=-1;

void push(struct TreeNode *k){
    a[++top]=k;
}

struct TreeNode *pop(){
    return a[top--];
}

bool isempty(){
    return top==-1;
}


int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *b=(int *)malloc(sizeof(int)*100);
    int c=0;
    struct TreeNode* t=root;
    while(t!=NULL){
        push(t);
        t=t->left;
    }
    while(!(isempty())){
        t=pop();
        b[c++]=t->val;
        t=t->right;
        while(t!=NULL){
            push(t);
            t=t->left;
        }
    }
    *returnSize=c;
    return b;
}
