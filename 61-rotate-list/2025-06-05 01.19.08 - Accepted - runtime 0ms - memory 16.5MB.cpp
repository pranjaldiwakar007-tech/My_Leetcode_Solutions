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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || !head->next) return head;
        int c=0,cnt=0;
        ListNode* neww=head;
    while(neww!=NULL){
        neww=neww->next;
        c++;
    }
    k=k%c;
    if(k%c==0 || k==0) return head;
         ListNode* temp=head;
        while(temp!=NULL && cnt!=c-k-1){
          temp=temp->next;
          cnt++;
        }
        ListNode* xxx=temp->next;
        temp->next=NULL;
        ListNode* last=xxx;
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=head;
  return xxx;  
    }
};