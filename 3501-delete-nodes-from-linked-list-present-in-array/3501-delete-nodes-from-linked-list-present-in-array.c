/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 /* gives tle
struct ListNode *tail;

struct ListNode *insert(struct ListNode *nhead, int x){
    struct ListNode *nn;
    nn = (struct ListNode*)malloc(sizeof(struct ListNode));
    nn->val = x;
    nn->next = NULL;
    if(nhead == NULL){ nhead = nn; tail = nn; }
    else{
        tail->next = nn;
        tail = tail->next;
    }
    return nhead;
}

struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {
    struct ListNode *nhead = NULL,*temp = head;
    while(temp!= NULL){
    int f = 0;
    for(int i =numsSize-1;i>=0;i--){
        if(temp->val == nums[i]){
            f= 1;
            break;
        }
    }
    if(!f){
        nhead=insert(nhead,temp->val);
    }
    temp = temp->next;
}
    head = nhead;
    return head;
}
*/

struct ListNode *tail;

struct ListNode *insert(struct ListNode *nhead, int x){
    struct ListNode *nn;
    nn = (struct ListNode*)malloc(sizeof(struct ListNode));
    nn->val = x;
    nn->next = NULL;
    if(nhead == NULL){ nhead = nn; tail = nn; }
    else{
        tail->next = nn;
        tail = tail->next;
    }
    return nhead;
}

int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int binary_search(int x, int len, int nums[]){
    int l = 0, h = len-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(nums[mid] == x) return 0;
        else if(nums[mid] > x) h = mid-1;
        else if(nums[mid] < x) l = mid+1;
    }
    return 1;
}

struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {
    qsort(nums,numsSize,sizeof(int),compare);
    struct ListNode *temp = head, *nhead = NULL;
    while(temp!= NULL){
        if(binary_search(temp->val,numsSize,nums)){
            nhead=insert(nhead,temp->val);
        }
        temp = temp->next;
    }
    head = nhead;
    return head;
}