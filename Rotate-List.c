Given a list, rotate the list to the right by k places, where k is non-negative.

For example:

Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.





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
 int findLen(listnode* A)
 {
     int length=0;
    while(A!= NULL)
    {
        length++;
        A=A->next;
    }
    return length;
 }
 
listnode* rotateRight(listnode* A, int k) {
    int l=findLen(A),i;
    if(k%l==0) return A;
    listnode* temp=A;
    for(i=0;i<l-k%l-1;i++){
        temp=temp->next;
    }
      listnode* next=temp->next;
    temp->next=NULL;
    
    listnode *last=next;
    while(last->next!=NULL)
     last=last->next;
     
    last->next=A;
    A=next;
    return A;
}
