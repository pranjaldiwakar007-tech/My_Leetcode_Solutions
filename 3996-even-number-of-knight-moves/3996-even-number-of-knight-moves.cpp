class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int ins=start[0];
        int ends=start[1];
        int ine=target[0];
        int ende=target[1];
        return ((ins+ends)%2)==((ine+ende)%2);
    }
};