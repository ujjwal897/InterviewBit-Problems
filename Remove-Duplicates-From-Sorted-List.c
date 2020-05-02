Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.





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
 * 
 * @Output head pointer of list.
 */
listnode* deleteDuplicates(listnode* A) {
    listnode* ptr=A;
    listnode* ptr1=NULL;
    if(ptr==NULL)
        return;
    while(ptr->next!=NULL)
    {
        if(ptr->val==ptr->next->val)
        {
            ptr1=ptr->next->next;
            free(ptr->next);
            ptr->next=ptr1;
        }
        else
            ptr=ptr->next;
    }
    return A;
}
