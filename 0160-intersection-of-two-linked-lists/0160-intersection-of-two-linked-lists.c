/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *t1 = headA, *t2 = headB;
    while(t1 != t2){
        t1 = t1 ? t1->next : headB;
        t2 = t2 ? t2->next : headA;
    }
    return t1;
}