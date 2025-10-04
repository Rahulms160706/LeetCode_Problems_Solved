/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *t1, *t2, *t3 = NULL,*merged = NULL;
    t1 = list1; t2 = list2;
    if(t1 == NULL) return t2;
    if(t2 == NULL) return t1;
    if(t1->val >= t2 -> val){ merged = t2; t2= t2->next; }
    else{ merged = t1; t1 = t1->next; }
    t3 = merged;
    while(t1 != NULL && t2 != NULL){
        if(t1->val <= t2 ->val){
            t3->next = t1;
            t1 = t1->next;
        }
        else if(t1->val > t2 ->val){
            t3->next = t2;
            t2 = t2->next;
        }
        t3 = t3->next;
    }
    if(t1!=NULL) t3->next = t1;
    else t3->next = t2;
    return merged;
} 