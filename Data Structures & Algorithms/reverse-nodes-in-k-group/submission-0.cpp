/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* grpPrev=dummy;
        while(true){
             ListNode* kth=grpPrev;
            for(int i=0;i<k;i++){
           
            kth=kth->next;
            if (kth==NULL){
                return dummy->next;
            }
        }
      
            ListNode* grpNxt=kth->next;
            ListNode* prev=grpNxt;
            ListNode* curr=grpPrev->next;
      while(curr!=grpNxt){
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
      }
      ListNode* temp=grpPrev->next;
      grpPrev->next=kth;
      grpPrev=temp;
        
    }}
};