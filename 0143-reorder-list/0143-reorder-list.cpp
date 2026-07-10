/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        stack<ListNode*> s;
        ListNode* tmp = head;
        int c = 0;
        while(tmp != NULL){
            tmp = tmp->next;
            c++;
        }
        int h = c/2;
        int i = 0; 
        tmp = head;
        while(i < h && tmp != NULL){
            tmp = tmp->next;
            i++;
        }
        ListNode* rest = tmp->next;
        tmp->next = NULL;
        while(rest != NULL){
            s.push(rest);
            rest = rest->next;
        }
        tmp = head;
        while(tmp != NULL && !s.empty()){
            ListNode *curr = s.top();
            s.pop();
            curr->next = tmp->next;
            tmp->next = curr;
            tmp = curr->next;
        }
    }
};