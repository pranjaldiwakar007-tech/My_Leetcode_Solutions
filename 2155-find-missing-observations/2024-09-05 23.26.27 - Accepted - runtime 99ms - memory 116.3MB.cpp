class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = 0;
        for (int i = 0; i < rolls.size(); i++) {
            sum = sum + rolls[i];
        }
        int rSum = mean * (n + rolls.size()) - sum;
        if (rSum > 6 * n or rSum < n) {
            return {};
        }
        int dmean = rSum / n;
        int mod = rSum % n;
        vector<int> ele(n, dmean);
        for (int i = 0; i < mod; i++) {
            ele[i]++;
        }
        return ele;
    }
};