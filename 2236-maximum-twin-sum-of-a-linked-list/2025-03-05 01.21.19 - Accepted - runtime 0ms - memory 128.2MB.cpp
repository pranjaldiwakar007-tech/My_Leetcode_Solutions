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
    int pairSum(ListNode* head) {
        int maxi=0,val;
        ListNode*fast=head->next;
        ListNode* slow=head;
        while(fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* temp=slow->next;
         ListNode* cur =temp;
        ListNode* prev=NULL;
        ListNode* next=cur;
        while(cur){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        slow->next=prev;
        ListNode* x=head;
while(prev){
       int val=x->val+prev->val;
       maxi=max(maxi,val);
       prev=prev->next;
       x=x->next;
        }
        return maxi;
    }
};