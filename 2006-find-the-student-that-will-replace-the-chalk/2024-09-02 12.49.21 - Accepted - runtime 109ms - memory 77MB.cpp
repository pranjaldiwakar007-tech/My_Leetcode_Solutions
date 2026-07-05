class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        //k-arr[i];
        // if(k==0) return i;
        //if(k<arr[i]) return i;
        long long accSum = accumulate(chalk.begin(), chalk.end(), 0LL);
        k %= accSum; 

        for (int i = 0; i < chalk.size(); ++i) {
            if (chalk[i] > k) {
                return i;  
            }
            k -= chalk[i];
        }
        return -1;  
    }
};