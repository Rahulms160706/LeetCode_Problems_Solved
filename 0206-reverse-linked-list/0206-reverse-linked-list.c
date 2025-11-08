/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
    struct ListNode *temp, *prev= head,*next = head->next, *nhead = head;
    while(next){
        nhead = next;
        temp = next;
        next = temp->next;
        temp->next = head;
        prev->next = next;
        head = nhead;
    }
    return head;
}