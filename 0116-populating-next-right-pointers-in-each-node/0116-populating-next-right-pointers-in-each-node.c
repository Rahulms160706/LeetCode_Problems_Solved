/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *left;
 *     struct Node *right;
 *     struct Node *next;
 * };
 */

struct Node* connect(struct Node* root) {
	if(root == NULL) return root;
    struct Node *l = root;
    while(l->left){
        struct Node* head = l;
        while(head){
            head->left->next = head->right;
            if(head->next) head->right->next = head->next->left;
            head = head->next;
        }
        l = l->left;
    }
    return root;
}