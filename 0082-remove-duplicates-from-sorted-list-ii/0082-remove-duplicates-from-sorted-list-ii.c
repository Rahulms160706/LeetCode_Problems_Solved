/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int cmp(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

struct ListNode* deleteDuplicates(struct ListNode* head) {
    int arr[300], final[300];
    struct ListNode *root = NULL;
    int l = 0,f = 1, k = 0;
    struct ListNode *tmp = head;
    while(tmp != NULL){
        arr[l++] = tmp->val;
        tmp = tmp->next;
    }
    for(int i = 0;i<l;i++){
        int ch = arr[i];
        for(int j = 0;j<l;j++){
            if(j == i) continue;
            else if(arr[j] == ch){
                f = 0;
                break;
            } 
            else f = 1;
        }
        if(f==1) final[k++] = arr[i];
        f = 0;
    }
    qsort(final,k,sizeof(int),cmp);
    int i = 0;
    while(i < k){
        struct ListNode *nn = (struct ListNode*)malloc(sizeof(struct ListNode));
        nn->val = final[i++];
        nn->next = NULL;
        if(root == NULL) root = nn;
        else {
            tmp = root;
            while(tmp->next != NULL) tmp = tmp->next;
            tmp->next = nn;
        } 
    }
    return root;
}