typedef long long ll;
class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        ll cnt=0;
        for(int i=0;i<n;i++){
            int tc=0;
            for(int j=i;j<n;j++){
                if(nums[j]==target) tc++;
            int l=j-i+1;
            if(tc>l/2) cnt++;
            }
        }
        return cnt;
    }
};