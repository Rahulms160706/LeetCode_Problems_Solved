/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int v;
struct ListNode* insert(struct ListNode *nl, struct ListNode **tail, int x){
    struct ListNode* nn=(struct ListNode*)malloc(sizeof(struct ListNode));
    nn->val = x;
    nn->next = NULL;
    if(nl == NULL){ nl = nn; (*tail) = nn; }
    else{
        (*tail)->next = nn;
        (*tail) = (*tail)->next;
    }
    return nl;
}

struct ListNode* sortList(struct ListNode* head) {
    if(head == NULL) return head;
    struct ListNode *temp = head,*tail = NULL,*nl = NULL;
    int freq[200001] = {0};
    while(temp!=NULL){
        if(temp->val < 0) freq[100000 + (-temp->val)]++;
        else freq[temp->val]++;
        temp = temp->next;
    }
    for(int i = 200000;i>=100001;i--){
        while(freq[i]){
            nl = insert(nl,&tail,(100000-i));
            freq[i]--;
        }
    }
    for(int i = 0;i<100000;i++){
        while(freq[i]){
            nl = insert(nl,&tail,i);
            freq[i]--;
        }
    }
    return nl;
}