/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// Floyd cycle detection algorithm

bool hasCycle(struct ListNode *head) {
    if(head == NULL) return false;
    else if(head->next == NULL) return false;
    struct ListNode *fast = head, *slow = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}