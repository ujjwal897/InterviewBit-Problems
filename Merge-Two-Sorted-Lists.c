Merge two sorted linked lists and return it as a new list.
The new list should be made by splicing together the nodes of the first two lists, and should also be sorted.

For example, given following linked lists :

  5 -> 8 -> 20 
  4 -> 11 -> 15
The merged list should be :

4 -> 5 -> 8 -> 11 -> 15 -> 20





/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * @input B : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* mergeTwoLists(listnode* A, listnode* B) {
    listnode* c=(listnode *)malloc(sizeof(listnode*));
    listnode* res=c;
    while(A&&B)
    {
        if(A->val <= B->val)
        {
            c->next=A;
            A=A->next;
        }
        else
        {
            c->next=B;
            B=B->next;
        }
        c=c->next;
    }
    
    while(A)
    {
        c->next=A;
        A=A->next;
        c=c->next;
    }
    while(B)
    {
        c->next=B;
        B=B->next;
        c=c->next;
    }
    return res->next;
}
