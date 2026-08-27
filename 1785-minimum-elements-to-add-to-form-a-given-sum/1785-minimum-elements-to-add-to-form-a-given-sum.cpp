class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long sum=accumulate(nums.begin(),nums.end(),0LL);
        // int cnt=0;
        return (abs(goal-sum)+limit-1)/limit;
    }
};