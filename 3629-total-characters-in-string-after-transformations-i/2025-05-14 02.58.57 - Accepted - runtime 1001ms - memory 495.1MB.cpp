class Solution {
public:
int mod =1e9+7;
    int lengthAfterTransformations(string s, int t) {
        vector<int>freq(26, 0);
        for (auto it : s) {
            freq[it - 'a']++;
        }
        for (int i = 0; i < t; i++) {

            vector<int> ans(26, 0);
            for (int j = 0; j < 26; j++) {
                if (j == 25 && freq[j] > 0) {
                    ans[0]=(ans[0]+freq[j])%mod;
                    ans[1]=(ans[1]+freq[j])%mod;
                }
               else if (freq[j] > 0) {
                    ans[j+1]=ans[j+1]+freq[j]%mod;
                }
            }
            freq = ans;
        }
        int sum = 0;
        for (auto it : freq)
            sum = (sum+it)%mod;
        return sum;
    }
};