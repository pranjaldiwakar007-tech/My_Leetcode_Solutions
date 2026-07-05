class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp = head;
        int n = 0;
        while (temp) {
            n++;
            temp = temp->next;
        }
        int size = n / k; 
        int rem = n % k; 
        vector<ListNode*> res(k,NULL);
        ListNode* cur = head;
        for (int i = 0; i < k; i++) {
            if (!cur) break; 
            res[i] = cur;
            int part_size = size;
            if (rem > 0) {
                part_size++; 
                rem--;
            }
            for (int j = 1; j < part_size; j++) {
                cur = cur->next;
            }
            ListNode* next = cur->next;
            cur->next = NULL;
            cur = next;
        }
        return res;
    }
};