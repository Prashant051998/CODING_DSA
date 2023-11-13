19. Remove Nth Node From End of List
Medium
17.5K
727
Companies
Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
 
 code#########################################################
 class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* trav = head;
        int count = 0;
        int remNode = 0;
        while(trav!=NULL){
            count++;
            trav=trav->next;
        }
        remNode = count - n;
        ListNode* pre = head;
        trav=head;
        while(remNode!=0){
            pre = trav;
            trav=trav->next;
            remNode--;
        }
        if(pre->next == NULL){
            head = NULL;
        }
        else if(trav->next != NULL){
            if(pre == trav){
                head = trav->next;
            }       
            else{
                pre->next = trav->next;
                trav = NULL;
            }
        }
        else{
            pre->next = NULL;
        }
        return head;
    }
};