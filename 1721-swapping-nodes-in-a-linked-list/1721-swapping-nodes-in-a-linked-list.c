/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode *tmp = head;
    int c = 0;
    while(tmp != NULL) {
        c++;
        tmp = tmp->next;
    }
    tmp = head;
    int f = k;
    int l = c - k + 1;
    int v1, v2, i = 1;
    while(tmp != NULL){
        if(i == f) v1 = tmp->val;
        if(i == l) v2 = tmp->val;
        tmp = tmp->next;
        i++;
    }
    tmp = head; i = 1;
    while(tmp != NULL){
        if(i == f) tmp->val = v2;
        if(i == l) tmp->val = v1;
        tmp = tmp->next;
        i++;
    }
    return head;
}