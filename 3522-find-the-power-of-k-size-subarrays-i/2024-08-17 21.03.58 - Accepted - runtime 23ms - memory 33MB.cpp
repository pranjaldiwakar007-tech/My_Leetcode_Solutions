class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
    vector<int> results;

    for (int i = 0; i <= n - k; ++i) {
        int maxElement = nums[i];
        bool consecutive = true;
        bool sorted = true;

        for (int j = i + 1; j < i + k; ++j) {
            maxElement = max(maxElement, nums[j]);
            if (nums[j] != nums[j - 1] + 1) {
                consecutive = false;
            }
            if (nums[j] < nums[j - 1]) {
                sorted = false;
            }
        }

        if (consecutive && sorted) {
            results.push_back(maxElement);
        } else {
            results.push_back(-1);
        }
    }

    return results;

        
    }
};