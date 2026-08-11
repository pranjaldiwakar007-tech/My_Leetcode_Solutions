class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int cnt=0,last=0,val=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int el=nums[i]-last-1;
            if(el!=0) cnt+=el;
            last=nums[i];
            // if(cnt==k) return last+el;
            if(cnt>=k) return last-(cnt-k)-1;
        }
        return last+(k-cnt);
    }
};