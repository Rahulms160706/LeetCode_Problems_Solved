/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if(!head || (left==right)) return head;
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode *prev = &dummy;
    
    for(int i = 1;i<left;i++) prev = prev->next;
    struct ListNode *curr = prev->next;
    struct ListNode *front = NULL;

    for(int i =0;i < right-left;i++){
        front = curr->next;
        curr->next = front->next;
        front->next = prev->next;
        prev->next = front;
    }
    return dummy.next;
}