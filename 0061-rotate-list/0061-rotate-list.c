/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode *temp = head;
    if(head == NULL || k == 0) return head;
    int l = 0;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    }
    k %= l;
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = head;
    temp = head;
    int d = l - k;
    while(d > 1) { temp = temp->next; d--; }
    head = temp->next;
    temp->next = NULL;
    return head;
}