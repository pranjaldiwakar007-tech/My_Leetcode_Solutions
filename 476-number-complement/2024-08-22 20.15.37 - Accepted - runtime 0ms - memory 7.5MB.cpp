class Solution {
public:
    int findComplement(int num) {
        int i = 0, ans = 0;
        while (num) {
            int temp = num & 1;
            if (!temp)
                ans +=(1<<i);
            num = num >> 1;
            i++;
        }
        return ans;
    }
};