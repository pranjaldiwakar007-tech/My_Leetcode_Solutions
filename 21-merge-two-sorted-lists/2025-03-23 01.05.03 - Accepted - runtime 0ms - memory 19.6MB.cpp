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
    ListNode* mergeTwoLists(ListNode* temp1, ListNode* temp2) {
       ListNode* prev=new ListNode(0);
       ListNode* cur=prev;
       ListNode* ans;
       while(temp1 && temp2){
           if(temp1->val<temp2->val){
            cur->next=temp1;
            temp1=temp1->next;
           }
           else{
              cur->next=temp2;
            temp2=temp2->next;
           }
           cur=cur->next;
       } 
         cur->next = temp1 ? temp1 : temp2;
        ListNode* head = prev->next;
        delete prev;
        return head;        
    }
};