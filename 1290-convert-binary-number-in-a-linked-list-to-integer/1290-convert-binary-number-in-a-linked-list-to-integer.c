/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    struct ListNode* temp = head;
    int l = 0;
    while(temp != NULL){
        l++;
        temp = temp->next;
    }
    temp = head;
    int x = 0; l--;
    while(temp!=NULL){
        x += (temp->val * pow(2,l));
        l--;
        temp = temp->next;
    }
    return x;
}