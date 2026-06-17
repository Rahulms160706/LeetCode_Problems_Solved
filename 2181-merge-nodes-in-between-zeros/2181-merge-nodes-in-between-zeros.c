/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode* change = head,*final = change, *temp = head, *prev = change;
    int sum = 0;
    while(temp != NULL){
        if(temp->val == 0){
            if(sum != 0){
                change->val = sum;
                prev = change;
                change = change->next;
                sum = 0;
            }
        }
        sum += temp->val;
        temp = temp->next;
    }
    prev->next = NULL;
    head = final;
    return head;
}