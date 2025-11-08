/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return head;

    struct ListNode dummy;
    dummy.next = head;
    struct ListNode *prevTail = &dummy;

    while (head && head->next) {
        struct ListNode *first = head;
        struct ListNode *second = head->next;

        first->next = second->next;
        second->next = first;

        prevTail->next = second;

        prevTail = first;
        head = first->next;
    }

    return dummy.next;
}
