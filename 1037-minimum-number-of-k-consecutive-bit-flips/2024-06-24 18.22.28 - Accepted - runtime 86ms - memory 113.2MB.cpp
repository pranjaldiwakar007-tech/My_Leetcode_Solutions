class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
           int n = nums.size();
        int flip = 0;
        int r = 0;
        vector<int> isFlip(n, 0);

        for (int i = 0; i < n; ++i) {
            if (i >= k) {
                flip ^= isFlip[i - k];
            }
            if (flip == nums[i]) {
                if (i + k > n) {
                    return -1;
                }
                isFlip[i] = 1;
                flip ^= 1;
                r++;
            }
        }

        return r;
    }

};