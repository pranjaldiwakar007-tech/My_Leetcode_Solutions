typedef long long ll;
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0) return nums;
        vector<int>temp(n,-1);
        if(2*k+1>n) return temp;
        int l=0,r=0;
        ll sum=0;
        for(;r<n;r++){
            // if(r-l+1<k){
                sum+=nums[r];
                temp[r]=-1;
            // }
            if(r-l+1==2*k+1){
                int mid=(l+k);
                // while(r!=r+k+1){
                temp[mid]=sum/(2*k+1);
                    sum-=nums[l];
                    l++;
                // }
            }
            // sum-=nums[l];
            // l++;
            // temp[mid]=sum/(2*k+1);
        }
        return temp;
    }
};