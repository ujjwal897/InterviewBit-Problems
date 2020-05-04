Given a linked list, remove the nth node from the end of list and return its head.

For example,
Given linked list: 1->2->3->4->5, and n = 2.
After removing the second node from the end, the linked list becomes 1->2->3->5.

 Note:
If n is greater than the size of the list, remove the first node of the list.
Try doing it using constant additional space.





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
 * @input B : Integer
 * 
 * @Output head pointer of list.
 */
listnode* removeNthFromEnd(listnode* A, int B) {
    listnode* ptr=A;
    listnode* ptr1=NULL;
    int l=length(A),i=0;
    if(B>=l || l==1)
    {
        A=A->next;
        free(ptr);
    }
    else
    {
    while(ptr->next!=NULL)
    {
        if(i==(l-B-1))
        {
            ptr1=ptr->next->next;
            free(ptr->next);
            ptr->next=ptr1;
            break;
        }
        else
            ptr=ptr->next;
        i++;
    }
    }
    return A;
}
int length(listnode* head)
{
    int n=0;
    while(head!=NULL)
    {
        n++;
        head=head->next;
    }
    return n;
}