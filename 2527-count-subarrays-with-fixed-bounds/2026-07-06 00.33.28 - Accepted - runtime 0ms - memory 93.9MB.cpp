typedef long long ll;
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
            ll cul=-1;
            int n=nums.size();
            ll ans=0;
            int minpos=-1,maxpos=-1;
        //   int l=n-1;
          ll smaller;
          for(int i=0;i<n;i++){
            if( nums[i]>maxK || nums[i]<minK) cul=i;
            if(nums[i]==maxK) maxpos=i;
            if(nums[i]==minK) minpos=i;
          smaller=min(maxpos,minpos);
          ll temp=smaller-cul;
          ans+=(temp<0)?0:temp;
        }
          return ans;
    }
};