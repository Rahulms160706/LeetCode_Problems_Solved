/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *sum = NULL, *tail = NULL;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int x = 0;
        int y = 0;

        if (l1 != NULL) {
            x = l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            y = l2->val;
            l2 = l2->next;
        }

        int s = x + y + carry;
        carry = s / 10;

        struct ListNode *nn = (struct ListNode*)malloc(sizeof(struct ListNode));
        nn->val = s % 10;
        nn->next = NULL;

        if (sum == NULL) sum = nn;
        else tail->next = nn;
        tail = nn;
    }

    return sum;
}


/*
long long int display(struct ListNode *list)
{
    struct ListNode *temp = list;
    long long int sum=0;
    if(list == NULL) printf("Empty\n");
    else{
        while(temp!=NULL)
        {
            sum = (sum*10) + temp->val;
            temp=temp->next;
        }
    }
    return sum;
}

long long int reverse(int n)
{
    long long int d,res=0;
    while(n>0)
    {
        d = n%10;
        res = (res*10)+d;
        n=n/10;
    }
    return res;
}

struct ListNode *convert_to_LL(struct ListNode *sum,int x)
{
    struct ListNode *temp;
    temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val=x;
    temp->next=NULL;
    if(sum==NULL) sum=temp;
    else{
        temp->next=sum;
        sum=temp;
    }
    return sum;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    long long int n1 = display(l1);
    long long int no1 = reverse(n1);
    // printf("The actual number of LL1 is : %d\n",no1);

    long long int n2 = display(l2);
    long long int no2 = reverse(n2);
    // printf("The actual number of LL2 is : %d\n",no2);
    long long int final = no1 + no2;
    struct ListNode *sum = NULL;
    // printf("the sum is : %d\n",final);
    if(final == 0){ 
        sum = (struct ListNode*)malloc(sizeof(struct ListNode));
        sum->val = 0; 
        sum->next = NULL; 
        return sum; }
    else{
    long long int fs = reverse(final);
    int d;
        while(fs>0)
        {
            d = fs%10;
            fs=fs/10;
            sum = convert_to_LL(sum,d);
        }
    return sum;
    }
}
*/