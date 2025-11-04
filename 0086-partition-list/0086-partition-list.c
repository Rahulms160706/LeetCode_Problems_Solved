/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *insert(struct ListNode *head, struct ListNode **tail, int x){
    struct ListNode *nn =(struct ListNode *)malloc(sizeof(struct ListNode));
    nn->val = x;
    nn->next = NULL;
    if(head == NULL){ head = nn; (*tail) = nn; }
    else{
        (*tail)->next = nn;
        (*tail) = (*tail)->next;
    }
    return head;
}

struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode *temp = head,*nhead = NULL, *tail = NULL;
    while(temp!=NULL){
        if(temp->val < x)
            nhead = insert(nhead,&tail,temp->val); 
        temp=temp->next;
    }
    temp = head;
    while(temp!=NULL){
        if(temp->val >= x)
            nhead = insert(nhead,&tail,temp->val); 
        temp=temp->next;
    }
    return nhead;
}