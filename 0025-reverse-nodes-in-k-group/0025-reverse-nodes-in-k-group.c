/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *insert(struct ListNode *nhead, struct ListNode **tail, int x){
    struct ListNode *nn = (struct ListNode *)malloc(sizeof(struct ListNode));
    nn->val = x;
    nn->next = NULL;
    if(nhead == NULL){ nhead = nn; (*tail) = nn; }
    else{
        nn->next = nhead;
        nhead = nn;
    }
    return nhead;
}

struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode *temp = head, *nhead = NULL, *tail = NULL;
    struct ListNode dummy;
    dummy.next = nhead;
    struct ListNode *prevtail = &dummy;
    int c = 0;
    while(temp!=NULL){
        c++;
        temp = temp->next;
    }
    int repeat = c/k;
    temp = head;
    while(temp != NULL && repeat > 0){
        int cpy = k;
        while(cpy > 0){
            nhead = insert(nhead,&tail,temp->val);
            temp = temp->next;
            cpy--;
        }
        prevtail->next = nhead;
        prevtail = tail;
        nhead = NULL;
        repeat--;
    }
    if(temp != NULL){
        tail->next = temp;
    }
    return dummy.next;
}