/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/* too much time
struct ListNode *insert(struct ListNode *reverse, int x){
    struct ListNode *nn = (struct ListNode*)malloc(sizeof(struct ListNode));
    nn->val = x;
    nn->next = NULL;
    if(reverse == NULL) reverse = nn;
    else{
        nn -> next = reverse;
        reverse = nn;
    } 
    return reverse;
}

int check(struct ListNode* reverse,struct ListNode* head){
    struct ListNode *t1 = reverse, *t2 = head;
    while(t1!= NULL && t2 != NULL){
    if(t1 -> val != t2-> val)
        return -1;
    t1 = t1->next;
    t2 = t2->next;
    }
    if(t1 != NULL || t2 != NULL)
        return -1;
    return 1;
}
*/

int size = 0;

void push(int reverse[],int *top,int x){
    if((*top) != size) 
    reverse[++(*top)] = x;
}

int pop(int reverse[], int *top){
    return reverse[(*top)--];
}

bool isPalindrome(struct ListNode* head) {
    struct ListNode *temp;
    int top = -1;
    size = 0;
    temp = head;
    if(temp->next == NULL) return true;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    int reverse[size];
    temp = head;
    while(temp!=NULL){
        push(reverse,&top,temp->val);
        temp = temp->next;
    }
    int c = 0;
    temp = head;
    while(temp!=NULL){
        if(pop(reverse,&top) != temp->val) return false;
        else{ c++; }
        temp = temp->next;
    }
    if(c == size) return true;
    return false;
}