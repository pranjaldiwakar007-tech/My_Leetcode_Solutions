class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> valToRemove(nums.begin(), nums.end());
        while (head && valToRemove.count(head->val) > 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        if (!head) return nullptr;
        ListNode* cur = head;
        while (cur->next) {
            if (valToRemove.contains(cur->next->val)) {
                ListNode* temp = cur->next;
                cur->next = cur->next->next;
                delete temp;
            } 
            else cur=cur->next;
        }

        return head;
    }
};