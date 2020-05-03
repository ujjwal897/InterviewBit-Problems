Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.

For example,
Given 1->2->3->3->4->4->5, return 1->2->5.
Given 1->1->1->2->3, return 2->3.





/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head) {
     if ((head==NULL) || (head->next == NULL) ){return head;}
        ListNode* pre = new ListNode(0);
        pre->next = head;
        head =pre;
        ListNode* p = head;
                     
        while(p->next!=NULL){
            ListNode *p2 = p->next;
            while ((p2->next!=NULL)&&(p2->val==p2->next->val)){
                p2=p2->next;
            }
            if (p2!=p->next){
                p->next=p2->next;
            }else{
                p=p->next;
            }
        }  
        return head->next;
}
