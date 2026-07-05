class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        ios_base::sync_with_stdio(false);
        cout.tie(0);cin.tie(0);
        int n = code.size();
        vector<int> ans(n, 0);
        if (k == 0)
            return ans;

        vector<int> temp = code;
        for (auto i : code) {
            temp.push_back(i);
        }
        if (k > 0) {
            int sum = 0;
            for (int i = 1; i <= k; i++) {
                sum += code[i];
            }
            ans[0] = sum;

            for (int i = 1; i < n; i++) {
                sum += temp[i + k];
                sum -= temp[i];
                ans[i] = sum;
            }
        }
    
        else { 
            k *= -1;
            int sum = 0;
        
            for (int i = n - 1; i >= n - k; i--) {
                sum += temp[i];
            }
            ans[0] = sum;
            for (int i = n + 1; i < 2 * n; i++) {
                sum += temp[i - 1];
                sum -= temp[i - k - 1];
                ans[i - n] = sum;
            }
        }

        return ans;
    }
};