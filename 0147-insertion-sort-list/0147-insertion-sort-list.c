/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertionSortList(struct ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
    struct ListNode *tmp = head->next;
    int noc = 0;
    struct ListNode *start = head, *prev = NULL, *tail = head, *next = NULL;
    while(tmp != NULL){
        while(start != tmp){
            next = tmp->next;
            if(tmp->val > start->val) {
                prev = start;
                start = start->next;
            }
            else{
                struct ListNode *cpy = tmp;
                if(tail->next == tmp) noc = 1;
                tail->next = cpy->next;
                if(prev == NULL) {
                    cpy->next = start;
                    head = cpy;
                }
                else{
                    cpy->next = prev->next;
                    prev->next = cpy;
                }
                break;
            }    
        }
        tmp = next;
        if(!noc) tail = tail->next;
        start = head;
        prev = NULL;
        noc = 0;
    }
    return head;
}