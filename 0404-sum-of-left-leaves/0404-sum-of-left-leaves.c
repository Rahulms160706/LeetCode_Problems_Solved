/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int empty(int *top){
    return (*top) == -1;
}

void push(struct TreeNode *stk[], int *top, struct TreeNode *tmp){
    stk[++(*top)] = tmp;
}

struct TreeNode *pop(struct TreeNode *stk[], int *top){
    return stk[(*top)--];
}

int sumOfLeftLeaves(struct TreeNode* root) {
    int top = -1;
    struct TreeNode *stk[1000];
    struct TreeNode *tmp = root;
    long long int sum = 0;
    while(tmp->left != NULL) {
        push(stk,&top,tmp);
        tmp = tmp->left;
        if(tmp->left == NULL && tmp->right == NULL) {
            sum += tmp->val;
        }
    }
    push(stk,&top,tmp);
    while(!empty(&top)){
        tmp = pop(stk,&top);
        if(tmp->right != NULL){
            tmp = tmp->right;
            while(tmp->left != NULL) {
                push(stk,&top,tmp);
                tmp = tmp->left;
                if(tmp->left == NULL && tmp->right == NULL) {
                    sum += tmp->val;
                }
            }
            push(stk,&top,tmp);
        }
    }
    return sum;
}