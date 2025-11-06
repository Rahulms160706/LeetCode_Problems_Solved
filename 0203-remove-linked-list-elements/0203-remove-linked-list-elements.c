/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* temp = head, *prev;
    while(temp!= NULL){
        while(temp != NULL && temp->val != val){
            prev = temp;
            temp = temp->next;
        }  
        if(temp == NULL)break;
        else if(temp->val == val){
            if(temp == head) head = head->next;
            else if(temp->next == NULL) prev->next = NULL;
            else prev->next = temp->next;
        }
        temp = temp->next;
    }
    return head;
}