/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int numComponents(struct ListNode* head, int* nums, int numsSize) {
    int l = 10001;
    int arr[l];
    for(int i = 0;i<l;i++) arr[i] = 0;
    for(int i = 0;i<numsSize;i++){
        arr[nums[i]] = 1;
    }
    struct ListNode *temp = head;
    int cons = 0, count = 0;
    while(temp != NULL){
        if(arr[temp->val] == 0){
            if(cons != 0){
                count++;
                cons = 0;
            }
        }
        else if(arr[temp->val] == 1) cons++;
        temp = temp->next;
    }
    if(cons > 0) count++;
    return count;
}