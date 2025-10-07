/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *temp = head;
    struct ListNode *prev = head, *node = head;
    if(head->next == NULL && n==1){
        free(head);
        return NULL;
    }
    while(temp != NULL){
        int c = n;
        while(c != 0){
            temp=temp->next;
            c--;
        }
        if(node == head && prev == head && temp == NULL){
            head = head->next;
            return head;
        }
        else if(temp == NULL){
            prev->next = node->next;
        }
        else {
            prev = node;
            node = node->next;
            temp = node;
            c = n;
        }
    }
    return head;
}