/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *tail = NULL;
struct ListNode *insert(struct ListNode *head, int x){
    struct ListNode *nn = (struct ListNode *)malloc(sizeof(struct ListNode));
    nn->val = x;
    nn->next = NULL;
    if(head == NULL){ head = nn; tail = nn; }
    else{
        tail->next = nn;
        tail = tail->next;
    }
    return head;
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    int arr[20001]={0};
    struct ListNode *head = NULL;
    struct ListNode *temp = NULL;
    for(int i = 0;i<listsSize;i++){
        temp = lists[i];
        while(temp!= NULL){
            if(temp->val < 0) arr[10000+(-temp->val)] += 1;
            else arr[temp->val] += 1;
            temp = temp->next;
        }
    }
    for(int i = 20000;i>10000;i--){
        while(arr[i]){ 
            head = insert(head,(10000-i));
            arr[i]--;
        }
    }
    for(int i = 0;i<10001;i++){
        while(arr[i]){ 
            head = insert(head,i);
            arr[i]--;
        }
    }
    return head;
}