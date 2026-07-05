typedef long long ll;
class Solution {
public:
    ll putMarbles(vector<int>& nums, int k) {
        if(k==1)return 0;
        vector<int> arr;
        for(int i=0;i<nums.size()-1;i++){
            arr.push_back(nums[i]+nums[i+1]);
        }
        sort(arr.begin(),arr.end());
        ll max=accumulate(arr.begin(),arr.begin()+(k-1),0LL);
        ll min=accumulate(arr.end()-(k-1),arr.end(),0LL);
        return abs(max-min);
    }
};