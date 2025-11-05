/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *insert(struct ListNode *nhead,int x, struct ListNode **tail){
    struct ListNode *nn = (struct ListNode *)malloc(sizeof(struct ListNode));
    nn->val = x;
    nn->next = NULL;
    if(nhead == NULL){ nhead = nn; (*tail) = nn; }
    else{
        (*tail)->next = nn;
        (*tail) = (*tail)->next;
    }
    return nhead;
}

struct ListNode* deleteDuplicates(struct ListNode* head) {
    int arr[201] = {0};
    struct ListNode *temp = head, *tail=NULL, *nhead = NULL;
    while(temp!= NULL){
        if(temp->val >= 0) arr[temp->val] = 1;
        else arr[100 + (-temp->val)] = 1;
        temp=temp->next;
    }
    for(int i = 200;i>100;i--){
        if(arr[i] == 1) nhead = insert(nhead,100-i,&tail);
    }
    for(int i = 0;i<101;i++){
        if(arr[i] == 1) nhead = insert(nhead,i,&tail);
    }
    return nhead;
}